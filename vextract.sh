#!/bin/bash

# file_to_extract=$1

##################################
# Delete all files from precedent extractions
##################################
#
rm verbatim.csv section.csv
#
#
#
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

while IFS= read -r line; do
    IFS=',' read -r ver_num start_point end_point ver_num_lines <<< "$line"
    echo "Verbatim number: $ver_num -- It starts line: $start_point"
done < verbatim.csv
# for each begin in verbatim.csv
#   run the get section command
#
#

# while IFS= read -r line; do
#     IFS=',' read -r begin_int end_int sub_int <<< "$line"
#     b_int=$((begin_int))
#     section_array $b_int
# done < begin.txt
# 
# file1="begin.txt"
# file2="chapter_name.txt"
# all="all.csv"
# 
# paste -d ',' "$file1" "$file2" > "$all"





# while IFS= read -r line; do
#     IFS=',' read -r begin_int end_int sub_int <<< "$line"
# 
#     b_int=$((begin_int))
#     # e_int=$((end_int))
#     # sed -n "${b_int},${e_int}p" 3_cpp.tex
#     
# done < sub.txt >> result.txt

