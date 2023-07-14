cmake_minimum_required(VERSION 3.16)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

# ALWAYS CREATE THESE VARIABLES IN THE TOP DIRECTORY
# IN THE ROOT CMAKEFILE
# The var will be included in the add_subdirectory chain at the end here.


# set a variable for the library you want to use
# common synthax is capital letters.

# we reference Library in other CMakeLists files
# we change the Library name for LIBA

set(LIBA Library)

# where we used Library, write ${LIBA}

# we have used Hello for our executable name so far.
# we can change it as well.

set(HE Hello)

# where we used Hello, write ${HE}

add_subdirectory(src)
add_subdirectory(app)
