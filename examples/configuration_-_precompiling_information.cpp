
configure_file(
    "config.hpp.in"
    # "${CMAKE_BINARY_DIR}" this is our build directory
                          # it is one of prebuilt directories in CMAKE
                          # thus, we reference it with CMAKE_BINARY_DIR
                          # we create an output for a config file, 
                          # in our build directory.

    # "${PROJECT_SOURCE_DIR}" # stores absolute path to project's root directory

    "${CMAKE_BINARY_DIR}/configured_files/include/config.hpp" ESCAPE_QUOTES 

