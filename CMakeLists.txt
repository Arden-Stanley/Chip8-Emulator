cmake_minimum_required(VERSION 3.10)

project(Chip8)

add_executable(chip8 src/main.cpp "src/Memory.h" "src/Memory.cpp" "src/Chip8.h" "src/Chip8.cpp" "src/CPU.h" "src/CPU.cpp" "src/Stack.h" "src/Stack.cpp" "src/Font.h" "src/Font.cpp")