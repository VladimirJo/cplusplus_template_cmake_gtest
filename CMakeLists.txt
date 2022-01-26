cmake_minimum_required(VERSION 3.0.0)
project(TEMPLATE VERSION 0.1.0)

# get googletest, update GIT_TAG accordi
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest
  GIT_TAG release-1.11.0
)

FetchContent_GetProperties(googletest)
#googletest_POPULATED
#googletest_SOURCE_DIR
#googletest_BUILD_DIR

if(NOT googletest_POPULATED)
    FetchContent_Populate(googletest)
    add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BUILD_DIR})
endif()


add_executable(${PROJECT_NAME} 
  main.cpp
)

target_include_directories(${PROJECT_NAME}  PUBLIC 
  include
)

target_link_libraries(${PROJECT_NAME}  srcLibrary)

add_subdirectory(src)

add_subdirectory(test)

