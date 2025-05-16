cmake_minimum_required(VERSION 3.10.0)
project(calcu_sdl3 VERSION 0.1.0 LANGUAGES C CXX)

add_executable(calcu_sdl3 src/main.cpp)

target_link_libraries(calcu_sdl3 SDL3 SDL3_image)

target_include_directories(calcu_sdl3 PRIVATE include)
