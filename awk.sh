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

read -r begin_value < begin.txt 
read -r end_value < end.txt 

begin_val_int=$((begin_value))
end_val_int=$((end_value))
sub=$((end_val_int - begin_val_int)) 

echo "end: ${end_val_int} - begin ${begin_val_int}"
echo "substraction is ${sub}"

