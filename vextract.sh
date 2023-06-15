#!/bin/bash

# file_to_extract=$1

##################################
# Delete all files from precedent extractions
##################################
#
rm verbatim.csv section.csv
#
#

##################################
# Find the right section, given an array of line numbers
#
# This implementation is based on the two crystal ball algorithm puzzle.
#
# [120,149,220]
# 
# if number is 135, it finds the section starting at 120
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
    for (( j = 0; j < jmpAmount && i < length; j++, i++ )); do
        if (( section_start_a[i] > target )); then
            
            i=$(( i - 1 ))
            
            echo "The given target is: $target"
            echo "The found section is: ${section_start_a[i]}"
            return 
        fi
    done

    echo "-1"
    
}
##################################
# Create verbatim.csv
##################################
#
# Format: Verbatim number, Start, End, Number of lines for Verbatim
#
##################################
#
awk '/begin{verbat/ { print NR }' 3_cpp.tex >> begin.txt
awk '/end{verbat/ { print NR }' 3_cpp.tex >> end.txt
paste -d ',' begin.txt end.txt > both.csv 
awk -F ',' '{result = $2 - $1; print $0 "," result}' both.csv >> no_num_verbatim.csv
nl -w1 -s, no_num_verbatim.csv > verbatim.csv

rm begin.txt end.txt both.csv no_num_verbatim.csv

##################################
# Create section.csv
##################################
#
# Format: Section number, Start, Name of Section 
#
##################################
awk '/section/ { print NR "," $0 }' 3_cpp.tex >> no_num_section.csv
nl -w1 -s, no_num_section.csv > section.csv

#
rm no_num_section.csv
#
# Create array of Section Start
#
section_start_a=()

while IFS= read -r line; do
    IFS=',' read -r sec_num start_point sec_name <<< "$line"
    section_start_a+=("$start_point")
done < section.csv

echo "${section_start_a[@]}"

##################################
#
# For each verbatim find section section
#
##################################

while IFS= read -r line; do
    IFS=',' read -r ver_num start_point end_point ver_num_lines <<< "$line"
    echo "Verbatim number: $ver_num -- It starts line $start_point"

    find_section "$start_point"
done < verbatim.csv
#
#
