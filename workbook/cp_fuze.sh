#!/bin/bash

# pretty date
date=$(date +"%m-%d-%H:%M")

# relative paths 
script_dir="$(dirname ${BASH_SOURCE[0]})"

# the wildcard character * is missed when in quotes
# cp assets, to compile with images

cp ${script_dir}/../assets/*.png "${script_dir}"
cp ${script_dir}/1_cpp/*.tex "${script_dir}"
cp ${script_dir}/2_data_structure/*.tex "${script_dir}"
cp ${script_dir}/3_cmake/*.tex "${script_dir}"
cp ${script_dir}/4_gdb/*.tex "${script_dir}"
cp ${script_dir}/5_engineering/*.tex "${script_dir}"
cp ${script_dir}/6_timeline/*.tex "${script_dir}"


# Refact possible,
# recursively look for .tex files,
# then cat it in one .tex file
#

path_1=${script_dir}
files=$(ls $path_1)
 
 
echo "
\documentclass[openany]{report}
\usepackage[margin=1.2in]{geometry}
\usepackage{graphicx}
\usepackage{parskip}
\usepackage{fancyhdr}

\pagestyle{fancy}
\fancyhf{}                      % Clear all header and footer fields
\fancyhead[R]{\leftmark}        % Display chapter name at the top right corner

\title{C++ Workbook}
\author{Mikael J. Gonsalves}
\date{\today}
\begin{document}
\maketitle
\tableofcontents
" > cpp_$date.tex
# 
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

rm *.png ; 
rm *.aux ; rm *.log ; rm *.toc
mv *.pdf complete ; mv cpp_$date.tex complete
rm *.tex

