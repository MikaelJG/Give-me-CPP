
option(ENABLE_COVERAGE "Enable a Code COverage build." ON)

...

if(ENABLE_COVERAGE)
    include(CodeCoverage)
    append_coverage_compiler_flags() # defined in CodeCoverage.cmake file
endif()



option(ENABLE_COVERAGE "Enable a Code COverage build." ON)

...

if(ENABLE_COVERAGE)
    include(CodeCoverage)
    append_coverage_compiler_flags() # defined in CodeCoverage.cmake file
endif()


