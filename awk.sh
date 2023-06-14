#!/bin/bash

rm begin.txt end.txt

awk '/begin{verbat/ { print NR }' 3_cpp.tex >> begin.txt
awk '/end{verbat/ { print NR }' 3_cpp.tex >> end.txt

# Find the number of lines in begin.txt
BEGIN_LINES=$(wc -l < begin.txt)
echo "begin.txt has $BEGIN_LINES number of lines"

# Find the number of lines in end.txt
END_LINES=$(wc -l < end.txt)
echo "end.txt has $END_LINES number of lines"


end_value=$(head -n 1 end.txt)
begin_value=$(head -n 1 begin.txt)

echo "end: ${end_value} - begin ${begin_value}"


# Loop through the range of lines
# for ((i = 1; i <= END_LINES; i++)); do
#     end_value=$(head -n "$i" end.txt)
#     begin_value=$(head -n "$i" begin.txt)
# 
#     echo "end: ${end_value} - begin ${begin_value}"
# done

