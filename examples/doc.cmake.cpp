
find_package(Doxygen)
if (DOXYGEN_FOUND)
    add_custom_target( # This is just an utility target
                       # With it, we can interact with it, 
                       # in the terminal
    docs
    ${DOXYGEN_EXECUTABLE}
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/docs

                       # CMAKE_SOURCE_DIR is always the directory of the
                       # root CMakeLIsts.txt file
                       # our root directory

                       # CMAKE_BINARY_DIR is always our build directory
endif()

