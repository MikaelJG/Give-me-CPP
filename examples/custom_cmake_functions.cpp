
function(add_git_submodule dir) # our function takes one argument called dir
                                # this dir, is where the submodule is located
                                # making the add_ action possible.
        find_package(Git REQUIRED) # Git must be on your computer, or it
                                   # Error's out.
        if (NOT EXISTS ${dir}/CMakeLists.txt)
            execute_process (COMMAND ${GIT_EXECUTABLE}}
            submodule update --init --recursive -- ${dir}
                                                     # recursive is essential here
                                                     # If someone clones your project, 
                                                     # It automatically clones this submodules,
                                                     # It clones auto repos, inside your repo.
                                                            
            WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}) # cmake saves some variable
                                                     # including the source dir
                                                     # of our project.
        endif()
        
        if (EXISTS ${dir}/CMakeLists.txt)
            message("Adding ${dir}/CMakeLists.txt")
            add_subdirectory(${dir})
        else
            message("Could not add ${dir}/CMakeLists.txt")
        endif()
endfunction(add_git_submodule)


function(add_git_submodule dir) # our function takes one argument called dir
                                # this dir, is where the submodule is located
                                # making the add_ action possible.
        find_package(Git REQUIRED) # Git must be on your computer, or it
                                   # Error's out.
        if (NOT EXISTS ${dir}/CMakeLists.txt)
            execute_process (COMMAND ${GIT_EXECUTABLE}}
            submodule update --init --recursive -- ${dir}
                                                     # recursive is essential here
                                                     # If someone clones your project, 
                                                     # It automatically clones this submodules,
                                                     # It clones auto repos, inside your repo.
                                                            
            WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}) # cmake saves some variable
                                                     # including the source dir
                                                     # of our project.
        endif()
        
        if (EXISTS ${dir}/CMakeLists.txt)
            message("Adding ${dir}/CMakeLists.txt")
            add_subdirectory(${dir})
        else
            message("Could not add ${dir}/CMakeLists.txt")
        endif()
endfunction(add_git_submodule)


function(add_git_submodule dir) # our function takes one argument called dir
                                # this dir, is where the submodule is located
                                # making the add_ action possible.
        find_package(Git REQUIRED) # Git must be on your computer, or it
                                   # Error's out.
        if (NOT EXISTS ${dir}/CMakeLists.txt)
            execute_process (COMMAND ${GIT_EXECUTABLE}}
            submodule update --init --recursive -- ${dir}
                                                     # recursive is essential here
                                                     # If someone clones your project, 
                                                     # It automatically clones this submodules,
                                                     # It clones auto repos, inside your repo.
                                                            
            WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}) # cmake saves some variable
                                                     # including the source dir
                                                     # of our project.
        endif()
        
        if (EXISTS ${dir}/CMakeLists.txt)
            message("Adding ${dir}/CMakeLists.txt")
            add_subdirectory(${dir})
        else
            message("Could not add ${dir}/CMakeLists.txt")
        endif()
endfunction(add_git_submodule)

