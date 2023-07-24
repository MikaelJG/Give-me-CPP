
...

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(AddGitSubmodule)


include(FetchContent)  # built-in library or file
                       # including it gives access to features

FetchContent_Declare() # Declare which github repository we would like to use
FetchContent_MakeAvailable() # will load this library in our cmake project.


                       # I want to use github.com/nlohmann/json
                       # any Gitlab is also possible
                       # I can do:
FetchContent_Declare(
    nlohmann_json      # since this repo is a cmake project,
                       # look at the project's root CMakeLists.txt file
                       # you will the name of the project, to enter here 
                       # see next image

    GIT_REPOSITORY https://github.com/nlohmann/json
    GIT_TAG v3.11.2    # the version I want to use
    GIT_SHALLOW TRUE)  # The function won't clone the repo recursively

                       # With this function, the git repository will be cloned in  
                       # our cloned repository.
                       # And it needs to be a cmake project.

                       # if it is not a cmake project, use the AddGitSubmodule method shown.
FetchContent_MakeAvailable(nlohmann_json) # will load this library in our cmake project.

