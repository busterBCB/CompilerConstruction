cmake_minimum_required(VERSION 3.14)

project(CompilerConstruction)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(comp ${PROJECT_SOURCE_DIR}/main.cpp
                    ${PROJECT_SOURCE_DIR}/scanner.cpp)
target_include_directories(comp PRIVATE ${PROJECT_SOURCE_DIR}/../include)