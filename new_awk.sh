#!/bin/bash

rm result.txt section.csv

section_array() {
    sec_file="section.csv"
    section_array=()
    chapter_name_array=()
    
    while IFS= read -r line; do
        IFS=',' read -r section_num chapter_name <<< "$line"
        section_array+=("$section_num")
        chapter_name_array+=("$chapter_name")
    done < "$sec_file"

    length=${#section_array[@]}
    sqrtLength=$(echo "sqrt($length)" | bc)
    jmpAmount=$(echo "($sqrtLength + 0.5) / 1" | bc)

    i=$jmpAmount

    target=$1

    while (( i < length )); do
        if (( section_array[i] > target )); then
            break
        fi
        i=$((i + jmpAmount))
    done

    i=$((i - jmpAmount))

    local j
    for (( j = 0; j < jmpAmount && i < length; j++, i++ )); do
        if (( section_array[i] > target )); then
            
            i=$(( i - 1 ))

            echo "The number given is $1 !"
            echo "Section_array[i] is this! :: ${section_array[i]}"
            echo "Chapter name is: ${chapter_name_array[i]}"
            
            sleep 1
            return
        fi
    done

    echo "-1"
    
}

awk '/begin{verbat/ { print NR }' 3_cpp.tex >> begin.txt
awk '/end{verbat/ { print NR }' 3_cpp.tex >> end.txt
awk '/section/ { print NR "," $0 }' 3_cpp.tex >> section.csv

file1="begin.txt"
file2="end.txt"
both="both.csv"

# Combine the lines from both files into the output CSV file
paste -d ',' "$file1" "$file2" > "$both"

# begin, end, substracted
# 335,358,23
awk -F ',' '{result = $2 - $1; print $0 "," result}' both.csv >> sub.txt


while IFS= read -r line; do
    IFS=',' read -r begin_int end_int sub_int <<< "$line"

    b_int=$((begin_int))
    e_int=$((end_int))
    # s_int=$((sub_int))
    #
    echo "this is b_int : $b_int"
    echo "this is e_int : $e_int"

    section_array $b_int

    sleep 1 

    # sed -n "${b_int},${e_int}p" 3_cpp.tex
    #
    # get rid of the begin{verba and end{verba line.
    # 
    
done < sub.txt

rm begin.txt end.txt both.csv sub.txt
