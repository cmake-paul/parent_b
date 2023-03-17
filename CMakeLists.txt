cmake_minimum_required(VERSION 3.25)

project(
    parent_1
    VERSION 0.0.1
    DESCRIPTION "A parent project"
    LANGUAGES CXX
)

include(FetchContent)

FetchContent_Declare(
    PlatformA
    GIT_REPOSITORY https://github.com/cmake-paul/platform_a.git
    GIT_TAG main
)

FetchContent_Declare(
    UtilA
    GIT_REPOSITORY https://github.com/cmake-paul/util_a.git
    GIT_TAG main
)

FetchContent_MakeAvailable(PlatformA UtilA)

add_executable(main)

add_subdirectory(include)
add_subdirectory(src)

target_link_libraries(
    main
    PRIVATE
    UtilA
)
