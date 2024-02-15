cmake_minimum_required(VERSION 3.14)

project(my-project)

include_directories(
        ${PROJECT_SOURCE_DIR}/src
        ${PROJECT_SOURCE_DIR}/include
)

file(GLOB all_SRCS
        "${PROJECT_SOURCE_DIR}/include/*.h"
        "${PROJECT_SOURCE_DIR}/src/*.cpp"
)

if(CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
        option(MATCH_TESTS "build tests (or no)" ON)

        if (MATCH_TESTS)
                add_library(example_google_tests ${all_SRCS})
                enable_testing()
                add_subdirectory(tests)
        endif()
endif()

add_executable(app ${all_SRCS})