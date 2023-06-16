#!/bin/bash

tex_file="$1"

##################################
# Delete all files from precedent extractions
##################################

rm verbatim.csv section.csv

##################################
#
# Find the right section, given an array of line numbers
#
# This implementation is based on the two crystal ball algorithm puzzle.
#
# [120,149,220]
# 
# if number is 135, finds section start at 120
#
##################################

find_section() {
    target=$1
    length=${#section_start_a[@]}
    sqrtLength=$(echo "sqrt($length)" | bc)
    jmpAmount=$(echo "($sqrtLength + 0.5) / 1" | bc)

    i=$jmpAmount

    while (( i < length )); do
        if (( section_start_a[i] > target )); then
            break
        fi
        i=$((i + jmpAmount))
    done

    i=$((i - jmpAmount))

    local j
    for (( j = 0; j <= jmpAmount && i < length; j++, i++ )); do
        if (( section_start_a[i] > target )); then
            
            i=$(( i - 1 ))

            section=${section_start_a[i]}
            
            echo "$section"
            return
        fi
    done

    echo "-1"
    
}

##################################
# Create verbatim.csv
#
# Format: Verbatim number, Start, End, Number of lines for Verbatim
#
##################################
#
awk '/begin{verbat/ { print NR }' "$tex_file" >> begin.txt
awk '/end{verbat/ { print NR }' "$tex_file" >> end.txt
paste -d ',' begin.txt end.txt > both.csv 
awk -F ',' '{result = $2 - $1; print $0 "," result}' both.csv >> no_num_verbatim.csv
nl -w1 -s, no_num_verbatim.csv > verbatim.csv

rm begin.txt end.txt both.csv no_num_verbatim.csv

##################################
# Create section.csv
#
# Format: Section number, Start, Name of Section 
#
##################################
awk '/section/ { print NR "," $0 }' "$tex_file" >> no_num_section.csv
nl -w1 -s, no_num_section.csv > section.csv

rm no_num_section.csv

##################################
#
# Create array of Section Start
#
##################################

section_start_a=()

while IFS= read -r line; do
    IFS=',' read -r sec_num start_point sec_name <<< "$line"
    section_start_a+=("$start_point")
done < section.csv

rm section.csv

# Append large number, allows last verbatim not to overheap.
# Otherwise, last verbatim fails the algo.
section_start_a+=("100000")

##################################
#
# For each verbatim find section section
#
##################################

while IFS= read -r line; do
    IFS=',' read -r ver_num start_point end_point ver_num_lines <<< "$line"
    section=$(find_section "$start_point")

    sed -n "${section}p" "$tex_file"

done < verbatim.csv >> section.csv

paste -d ',' verbatim.csv section.csv > best_verbatim.csv 

rm verbatim.csv ; mv best_verbatim.csv verbatim.csv

sed -i 's/\\section{//' verbatim.csv
sed -i 's/\\subsection{//' verbatim.csv
sed -i 's/}//' verbatim.csv

sed -i 's/\\section{//' section.csv
sed -i 's/\\subsection{//' section.csv
sed -i 's/}//' section.csv

mkdir output

#################################### 
# Create the final document
#
# Name of section
#
# example
#
# Name of section
#
# example 2
#################################### 
#
#
while IFS= read -r line; do
    IFS=',' read -r ver_num start_point end_point ver_num_lines sec_name <<< "$line"

    touch output/"$sec_name".test
    sed -n "${start_point},${end_point}p" "$tex_file" >> output/"$sec_name".test

    sed -i 's/\\end{verbatim}//' output/"$sec_name".test
    sed -i 's/\\begin{verbatim}//' output/"$sec_name".test

    cat output/"$sec_name".test
done < verbatim.csv


