
if(ENABLE_COVERAGE)
    set(COVERAGE_MAIN "coverage") # the name of this coverage to run
    set(COVERAGE_EXCLUDES
        "${PROJECT_SOURCE_DIR}/app/*"
        "${PROJECT_SOURCE_DIR}/cmake/*"
        "${PROJECT_SOURCE_DIR}/docs/*"
        "${PROJECT_SOURCE_DIR}/external/*"
        "${PROJECT_SOURCE_DIR}/tests/*"
        "${PROJECT_SOURCE_DIR}/build/*"
        "$usr/indlude/*")
    setup_target_for_coverage_lcov(
        NAME
        ${COVERAGE_MAIN}
        EXECUTABLE
        ${UNIT_TEST_NAME}
        DEPENDENCIES
        ${UNIT_TEST_NAME})
endif()

