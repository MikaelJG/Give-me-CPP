
set(TEST_MAIN "unit_tests")        # this is the name of our testing executable
set(TEST_SOURCES "main.cpp")       # Here, the tests are in one file only
                                   # It could be divided into more files
                                   # Header files for example
set(TEST_INCLUDES "./")
add_executable(${TEST_MAIN} ${TEST_SOURCES})
target_include_directories(${TEST_MAIN} PUBLIC ${TEST_INCLUDES})
target_link_libraries(${TEST_MAIN} PUBLIC ${LIBA} Catch2::Catch2)

                                   # Our library is linked, LIBA
                                   # This is how we will test it

