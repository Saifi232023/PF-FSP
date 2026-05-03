cmake_minimum_required(VERSION 3.17)
project(Tetris)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_POLICY_VERSION_MINIMUM 3.5)

include(FetchContent)
FetchContent_Declare(raylib URL https://github.com/raysan5/raylib/archive/refs/tags/5.0.zip DOWNLOAD_EXTRACT_TIMESTAMP TRUE)
FetchContent_MakeAvailable(raylib)

add_executable(tetris)

target_sources(tetris
PRIVATE
    src/main.cpp
    src/game.cpp
    src/block.cpp
    src/colors.cpp
    src/grid.cpp
    src/position.cpp
    src/tetris.cpp

    src/tetris.h
    src/colors.h
    src/grid.h
    src/game.h
    src/block.h
    src/blocks.h
    src/position.h

)

target_include_directories(tetris
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/src/)

target_link_libraries(tetris raylib)

# Copy resources
add_custom_command(TARGET tetris POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_SOURCE_DIR}/fonts
    $<TARGET_FILE_DIR:tetris>/fonts)

add_custom_command(TARGET tetris POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_SOURCE_DIR}/sounds
    $<TARGET_FILE_DIR:tetris>/sounds)
