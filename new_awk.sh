#!/bin/bash

rm begin.txt end.txt both.csv sub.txt

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
    IFS=',' read -r var1 var2 var3 <<< "$line"

    int1=$((var1))
    int2=$((var2))
    int3=$((var3))

    echo "int1: $int1"
    echo "int2: $int2"
    echo "int3: $int3"
    echo "Line: $line"
done < sub.txt

# sed -n '335,350p' 3_cpp.tex
#
# 

