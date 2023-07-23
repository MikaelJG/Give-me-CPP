#!/bin/bash

script_dir="$(dirname ${BASH_SOURCE[0]})"

echo $script_dir
cpp_tex_file="${script_dir}/1_cpp"
data_struct_tex_file="${script_dir}/2_data_structure"
cmake_tex_file="${script_dir}/3_cmake"
gdb_tex_file="${script_dir}/4_gdb"

if cd "$cpp_tex_file"; then
    echo "cpp dir found"
fi

cd ..

if cd "$data_struct_tex_file"; then
    echo "data dir found"
fi
cd ..
if cd "$cmake_tex_file"; then
    echo "cmake dir found"
fi
cd ..

if cd "$gdb_tex_file"; then
    echo "gdb dir found"
fi
# textra 
