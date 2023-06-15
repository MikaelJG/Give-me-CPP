#!/bin/bash

rm result.txt

awk '/begin{verbat/ { print NR }' 3_cpp.tex >> begin.txt
awk '/end{verbat/ { print NR }' 3_cpp.tex >> end.txt

file1="begin.txt"
file2="end.txt"
both="both.csv"

# Combine the lines from both files into the output CSV file
paste -d ',' "$file1" "$file2" > "$both"

# begin, end, substracted
# 335,358,23
awk -F ',' '{result = $2 - $1; print $0 "," result}' both.csv >> sub.txt

# print the range with sed command
#3
while IFS= read -r line; do
    IFS=',' read -r begin_int end_int sub_int <<< "$line"

    b_int=$((begin_int))
    e_int=$((end_int))
    # s_int=$((sub_int))

    sed -n "${b_int},${e_int}p" 3_cpp.tex
done < sub.txt > result.txt

rm begin.txt end.txt both.csv sub.txt
#
# 

