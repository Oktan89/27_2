cmake_minimum_required(VERSION 3.0.0)

set(SOURCES main.cpp shape.cpp)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(geometric ${SOURCES})

target_include_directories(geometric PUBLIC ${MY_INCLUDE_DIR})