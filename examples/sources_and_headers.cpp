
set(LIBRARY_SOURCES
     "my_lib.cpp"
     "my_lib2.cpp"
     ) # quotes are not mandatory, just preference.
set(LIBRARY_HEADERS
     "my_lib.h")

add_library(${LIBRARY_NAME} STATIC
    "./"
    "${CMAKE_BINARY_DIR}/configured_files/include")

