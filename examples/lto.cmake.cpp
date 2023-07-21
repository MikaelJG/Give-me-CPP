
function(target_enable_lto TARGET ENABLE)
    if(NOT ${ENBALE})
    endif()

    include(CheckIPOSupported)
    check_ipo_supported(RESULT result OUTPUT output)

    if(result) 
        message(STATUS "IPO/LTO is supported!")
        set_property(TARGET ${TARGET} PROPERTY_INTERPROCEDURAL_OPTIMIZATION ${ENABLE})
    else()
        message("WARNING "IPO/LTO is not supported!")

                                     #PROPERTY... is a predefined variable in modern cmake
    endif()
endfunction(target_enable_lto)

