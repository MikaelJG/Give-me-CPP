#!/bin/bash

script_dir="$(dirname ${BASH_SOURCE[0]})"

echo $script_dir
cpp_tex_file="${script_dir}/1_cpp/1_cpp.tex"
data_struct_tex_file="${script_dir}/2_data_structure/2_data_structure.tex"
cmake_tex_file="${script_dir}/3_cmake/3_cmake.tex"
gdb_tex_file="${script_dir}/4_gdb/4_gdb.tex"

if cat "$cpp_tex_file" >/dev/null 2>&1; then
    echo "cpp file found"
fi

if cat "$data_struct_tex_file" >/dev/null 2>&1; then
    echo "data file found"
fi

if cat "$cmake_tex_file" >/dev/null 2>&1; then
    echo "cmake file found"
fi

if cat "$gdb_tex_file" >/dev/null 2>&1; then
    echo "gdb file found"
fi
# textra 
