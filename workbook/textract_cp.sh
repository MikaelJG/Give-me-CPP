#!/bin/bash

script_dir="$(dirname ${BASH_SOURCE[0]})"

cpp_tex_file="${script_dir}/1_cpp/1_cpp.tex"
data_struct_tex_file="${script_dir}/2_data_structure/2_data_structure.tex"
cmake_tex_file="${script_dir}/3_cmake/3_cmake.tex"
gdb_tex_file="${script_dir}/4_gdb/4_gdb.tex"

if cat "$cpp_tex_file" >/dev/null 2>&1; then
    echo ""
    echo "Chapter 1 [ Cpp ]: file found."
    echo ""
    echo "Extracting... $cpp_tex_file"

    ~/code/textract_me/textract.sh "$cpp_tex_file" cpp

    echo "Extraction completed"
fi

if cat "$data_struct_tex_file" >/dev/null 2>&1; then
    echo ""
    echo "Chapter 2 [ Data Structures ]: file found."
    echo ""
    echo "Extracting... $data_struct_tex_file"

    ~/code/textract_me/textract.sh "$data_struct_tex_file" cpp

    echo "Extraction completed"
fi

if cat "$cmake_tex_file" >/dev/null 2>&1; then
    echo ""
    echo "Chapter 3 [ Cmake ]: file found."
    echo ""
    echo "Extracting... $cmake_tex_file"

    ~/code/textract_me/textract.sh "$cmake_tex_file" cpp

    echo "Extraction completed"
fi

if cat "$gdb_tex_file" >/dev/null 2>&1; then
    echo ""
    echo "Chapter 4 [ Gdb ]: file found."
    echo ""
    echo "Extracting... $gdb_tex_file"

    ~/code/textract_me/textract.sh "$gdb_tex_file" cpp

    echo "Extraction completed"
fi
# textra 
