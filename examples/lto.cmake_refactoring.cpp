
function(target_enable_lto)         # he passes less arguments here
    set(oneValueArgs TARGET ENABLE)
    cmake_parse_arguments(          # every options and arguments in oneValueArgs
                                    # will be prefixed by LTO_
                                    # thus, TARGET becomes LTO_TARGET
        LTO
        "${options}"
        "${oneValueArgs}"
        "${multiValueArgs}"
        ${ARGN})


    include(CheckIPOSupported)
    check_ipo_supported(RESULT result OUTPUT output)

    if(result) 
        message(STATUS "IPO/LTO is supported: ${LTO_TARGET}")
        set_property(TARGET ${LTO_TARGET} PROPERTY_INTERPROCEDURAL_OPTIMIZATION ${LTO_ENABLE})
    else()
        message("WARNING "IPO/LTO is not supported! ${LTO_TARGET}")

                                     #PROPERTY... is a predefined variable in modern cmake
    endif()
endfunction(target_enable_lto)


function(target_enable_lto)         # he passes less arguments here
    set(oneValueArgs TARGET ENABLE)
    cmake_parse_arguments(          # every options and arguments in oneValueArgs
                                    # will be prefixed by LTO_
                                    # thus, TARGET becomes LTO_TARGET
        LTO
        "${options}"
        "${oneValueArgs}"
        "${multiValueArgs}"
        ${ARGN})


    include(CheckIPOSupported)
    check_ipo_supported(RESULT result OUTPUT output)

    if(result) 
        message(STATUS "IPO/LTO is supported: ${LTO_TARGET}")
        set_property(TARGET ${LTO_TARGET} PROPERTY_INTERPROCEDURAL_OPTIMIZATION ${LTO_ENABLE})
    else()
        message("WARNING "IPO/LTO is not supported! ${LTO_TARGET}")

                                     #PROPERTY... is a predefined variable in modern cmake
    endif()
endfunction(target_enable_lto)

