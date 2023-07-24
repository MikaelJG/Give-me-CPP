
option(ENABLE_CLANG_TIDY "Enable to add clang tidy." ON)


set(CMAKE_EXPOET_COMPILE_COMMANDS ON) # this cmake function creates a json file
                                      # clang-tidy needs this json to work
                                      # to differenciate your code from dependencies.


