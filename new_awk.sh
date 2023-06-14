#!/bin/bash

rm begin.txt end.txt

awk '/begin{verbat/ { print NR }' 3_cpp.tex >> begin.txt
awk '/end{verbat/ { print NR }' 3_cpp.tex >> end.txt

file1="begin.txt"
file2="end.txt"
output="output.csv"

# Combine the lines from both files into the output CSV file
paste -d ',' "$file1" "$file2" > "$output"

# Find the number of lines in begin.txt
# BEGIN_LINES=$(wc -l < begin.txt)
# echo "begin.txt has $BEGIN_LINES number of lines"
# 
# # Find the number of lines in end.txt
# END_LINES=$(wc -l < end.txt)
# echo "end.txt has $END_LINES number of lines"
# 
# for ((i = 1; i <= END_LINES; i++)); do
# 
#     read -r begin_value < begin.txt 
#     read -r end_value < end.txt 
#     
#     begin_val_int=$((begin_value))
#     end_val_int=$((end_value))
#     sub=$((end_val_int - begin_val_int)) 
#     
#     echo "end: ${end_val_int} - begin ${begin_val_int}"
#     echo "substraction is ${sub}"
# 
# done


# create a csv
#
# begin_1, end_1
# begin_2, end_2
# begin_3, end_3
#
#
#
#
