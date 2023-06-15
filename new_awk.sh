#!/bin/bash

rm result.txt section.csv

section_array() {
    sec_file="section.csv"
    section_array=()
    
    while IFS= read -r line; do
      section_array+=("$line")
    done < "$sec_file"

    length=${#section_array[@]}
    sqrtLength=$(echo "sqrt($length)" | bc)
    jmpAmount=$(echo "($sqrtLength + 0.5) / 1" | bc)

    # print to see all values
    echo "${section_array[@]}"
    echo "this array has a length of: $length"
    echo "It has a sqrt length of: $sqrtLength"
    echo "The jmpAmount has been calculated at: $jmpAmount"

    #local i=$jmpAmount
    #while (( i < length )); do
    #    if (( section_array[i] < b_int )); then
    #        break
    #    fi
    #    i=$((i + jmpAmount))
    #done

    #i=$((i - jmpAmount))

    #local j
    #for (( j = 0; j < jmpAmount && i < length; j++, i++ )); do
    #    if (( section_array[i] < b_int )); then
    #        echo "$i"
    #        return
    #    fi
    #done

    #echo "-1"
    
}

awk '/begin{verbat/ { print NR }' 3_cpp.tex >> begin.txt
awk '/end{verbat/ { print NR }' 3_cpp.tex >> end.txt
awk '/section/ { print NR }' 3_cpp.tex >> section.csv

file1="begin.txt"
file2="end.txt"
both="both.csv"

# Combine the lines from both files into the output CSV file
paste -d ',' "$file1" "$file2" > "$both"

# begin, end, substracted
# 335,358,23
awk -F ',' '{result = $2 - $1; print $0 "," result}' both.csv >> sub.txt

section_array

sleep 20

# print the range with sed command
#3
while IFS= read -r line; do
    IFS=',' read -r begin_int end_int sub_int <<< "$line"

    b_int=$((begin_int))
    e_int=$((end_int))
    # s_int=$((sub_int))

    sed -n "${b_int},${e_int}p" 3_cpp.tex
    #
    # get rid of the begin{verba and end{verba line.
    # 
    
done < sub.txt > result.txt

rm begin.txt end.txt both.csv sub.txt
