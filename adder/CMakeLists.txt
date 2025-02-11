project(adder VERSION 0.1.0)

Message(STATUS "CMakeLists.txt [adder]")
cmake_print_variables(CMAKE_PROJECT_NAME)
cmake_print_variables(PROJECT_NAME)

file(GLOB PROJ_SRC "*.h" "*.cpp")
add_library(${PROJECT_NAME} STATIC ${PROJ_SRC})