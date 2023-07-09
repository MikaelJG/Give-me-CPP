#!/bin/bash

# pretty date
date=$(date +"%m-%d-%H:%M")


# relative paths 
script_dir="$(dirname ${BASH_SOURCE[0]})"

# get tools, to compile with cpp lang
# the wildcard character * is missed when in quotes
#
cp ${script_dir}/../../assets/*.png "${script_dir}"
cp "${script_dir}/../../7_tools/7_tools.tex" "${script_dir}"
cp "${script_dir}/../../4_computer_science_algorithms/algorithms.tex" "${script_dir}"

# cp assets, to compile with images

path_1=${script_dir}
files=$(ls $path_1)


echo "
\documentclass[openany]{report}
\usepackage[margin=1.2in]{geometry}
\usepackage{graphicx}
\usepackage{parskip}
\title{C++ Workbook}
\author{Mikael J. Gonsalves}
\date{\today}
\begin{document}
\maketitle
\tableofcontents
" > cpp_$date.tex

for file in $files; do

    ext="${file##*.}"
        case $ext in
            tex) 
                cat "$file" >> cpp_$date.tex
        esac
done

echo "\\end{document}" >> cpp_$date.tex

for i in {1..3}; do
    pdflatex cpp_$date.tex
done

rm "${script_dir}/7_tools.tex" ; rm "${script_dir}/algorithms.tex"

rm *.png 
rm *.aux ; rm *.log ; rm *.toc
mv *.pdf complete ; mv cpp_$date.tex complete

