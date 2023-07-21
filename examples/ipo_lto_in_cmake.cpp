
option(ENABLE_LTO "Enable the link time optimization" ON)

...

if(ENABLE_LTO)
    include(LTO)
endif()

