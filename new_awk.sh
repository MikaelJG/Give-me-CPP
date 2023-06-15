#!/bin/bash

rm result.txt section.csv

section_array() {
    sec_file="section.csv"
    section_array=()
    
    while IFS= read -r line; do
      section_array+=("$line")
    done < "$sec_file"
    
    # Print the array
    echo "${section_array[@]}"
}

find_section() {
    local -n sec_array=$1
    local length=${#sec_array[@]}
    local sqrtLength=$(echo "sqrt($length)" | bc)
    local jmpAmount=$(echo "($sqrtLength + 0.5) / 1" | bc)

    local i=$jmpAmount
    while (( i < length )); do
        if (( sec_array[i] < b_int )); then
            break
        fi
        i=$((i + jmpAmount))
    done

    i=$((i - jmpAmount))

    local j
    for (( j = 0; j < jmpAmount && i < length; j++, i++ )); do
        if (( sec_array[i] < b_int )); then
            echo "$i"
            return
        fi
    done

    echo "-1"
}

# Example usage
declare -a breaks=(false false false false false false true true true true)
result=$(two_crystal_balls breaks)
echo "Result: $result"

}
    # function two_crystal_balls(breaks: boolean[]):number {
    #     const jmpAmount = Math.floor(Math.sqrt(breaks.length)); // jump sqrt length
    #     
    #     let i = jmpAmount;
    #     for (i < breaks.length; 1 += jmpAmount) {
    #         if (break[i]) {
    #             break;
    #         }
    #     
    #     i -= jmpAmount;
    #     
    #     for (let j = 0; j < jmpAmount && i < breaks.length; ++j, ++i) { // linear
    #         if (break[i] {
    #             return i;
    #         }
    #     }
    #     return -1; // sentinal return, verify this
    # }

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
    #
    # 
    # Im pretty sure that finding the right section is the crystall balls problem 
    #
    # an array of boolean
    #
    # if begin is greater than section line, have the boolean value be true. 
    #
    # the second it is less, you have to walk back from the last true, to find exactly where it went false
    #
    # in other words, jump a certain amount, ask if the value if greater. 
    # If it is, jump again. If not, go back and jump small steps.
    #
    #
    #
    #
    #
done < sub.txt > result.txt

rm begin.txt end.txt both.csv sub.txt
#
# 

