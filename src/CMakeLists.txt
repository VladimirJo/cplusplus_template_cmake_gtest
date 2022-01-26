set(This
    srcLibrary
)

add_library(${This} STATIC
    LibraryCode.cpp
)

target_include_directories(${This} PUBLIC 
    ../include
)