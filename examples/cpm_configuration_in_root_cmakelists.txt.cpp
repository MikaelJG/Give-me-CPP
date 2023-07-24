
option(USE_CPM "Whether to use CPM" ON)

if(USE_CPM)
    message(STATUS "Using Cmake Package Manager")
    include(CPM)            # this includes the cpm.cmake file
    


                # "gh" cpm will look at github
                # "gh:nholmann" username
                # "gh:nholmann/json" repository name
                # "gh:nholmann/json#v3.11.2" version number 

    cpmaddpackage("gh:nholman/json#v3.11.2")    # This is CPM's defined function
    cpmaddpackage("gh:fmtlib/fmt#9.1.0")
    cpmaddpackage("gh:gabime/spdlog#v1.11.0")
    cpmaddpackage("gh:jarro2783/cxxopts#v3.1.1")
    cpmaddpackage("gh:cathorg/Catch2#v2.13.9")

else()
    message(STATUS "Using FetchContent")

    FetchContent_Declare(
        nlohmann_json      
        GIT_REPOSITORY https://github.com/nlohmann/json
        GIT_TAG v3.11.2    
        GIT_SHALLOW TRUE)  
    FetchContent_MakeAvailable(nlohmann_json) # will load this library in our cmake project.

    FetchContent_Declare(
        fmt
        GIT_REPOSITORY ...

endif()

