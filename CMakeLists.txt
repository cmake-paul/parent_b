cmake_minimum_required(VERSION 3.25)

project(
    parent_b
    VERSION 0.0.1
    DESCRIPTION "A parent project"
    LANGUAGES CXX
)

include(FetchContent)

FetchContent_Declare(
    PlatformB
    GIT_REPOSITORY https://github.com/cmake-paul/platform_b.git
    GIT_TAG main
)

FetchContent_Declare(
    UtilA
    GIT_REPOSITORY https://github.com/cmake-paul/util_a.git
    GIT_TAG main
)

FetchContent_Declare(
    UtilB
    GIT_REPOSITORY https://github.com/cmake-paul/util_b.git
    GIT_TAG main
)

FetchContent_MakeAvailable(PlatformB UtilA UtilB)

add_executable(main)

add_subdirectory(include)
add_subdirectory(src)

target_link_libraries(
    main
    PRIVATE
    UtilA
    UtilB
)
