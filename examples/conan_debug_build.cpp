
conan_d:    # for conan debug
    rm -rf build
    mkdir build
    cd build && conan install .. -s build_type=Debug =s compiler.cppstd=17 --output-folder=. --build missing
                                -s               # for settings change
                                -- build missing 
                                                 # build binaries where no compiled version are available

conan_r:    # for conan release
    rm -rf build
    mkdir build
    cd build && conan install .. -s build_type=Release -s compiler.cppstd=17 --output-folder=. --build missing



### With this, run

$make conan_d
$make conan_r
  

conan_d:    # for conan debug
    rm -rf build
    mkdir build
    cd build && conan install .. -s build_type=Debug =s compiler.cppstd=17 --output-folder=. --build missing
                                -s               # for settings change
                                -- build missing 
                                                 # build binaries where no compiled version are available

conan_r:    # for conan release
    rm -rf build
    mkdir build
    cd build && conan install .. -s build_type=Release -s compiler.cppstd=17 --output-folder=. --build missing



### With this, run

$make conan_d
$make conan_r
  
