#!/bin/bash

# pretty date
date=$(date +"%m-%d-%H:%M")

# relative paths 
script_dir="$(dirname ${BASH_SOURCE[0]})"

# the wildcard character * is missed when in quotes
# cp assets, to compile with images

cp ${script_dir}/../../assets/*.png "${script_dir}"

path_1=${script_dir}
files=$(ls $path_1)
 
echo "
\documentclass[openany]{report}
\usepackage[margin=1.2in]{geometry}
\usepackage{graphicx}
\usepackage{parskip}
\title{Cmake}
\author{Mikael J. Gonsalves}
\date{\today}
\begin{document}
\maketitle
\tableofcontents
" > cmake_$date.tex
# 
for file in $files; do

    ext="${file##*.}"
        case $ext in
            tex) 
                cat "$file" >> cmake_$date.tex
        esac
done

echo "\\end{document}" >> cmake_$date.tex

for i in {1..3}; do
    pdflatex cmake_$date.tex
done

rm *.png ; 
rm *.aux ; rm *.log ; rm *.toc
mv *.pdf complete ; mv cmake_$date.tex complete
rm *.tex 

