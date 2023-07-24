
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(LIBA Library)
set(HE Hello)

option(COMPILE_EXECUTABLE "Whether to compile the executable" OFF)

add_subdirectory(src)

if (COMPILE_EXECUTABLE)
    add_subdirectory(app)
endif()


# to call the option from the command line

#$ cmake .. -DCOMPILE_EXECUTABLE=ON

# then you can switch it back OFF later

#$ cmake .. -DCOMPILE_EXECUTABLE=OFF

