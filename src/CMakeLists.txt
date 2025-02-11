project(app_cmake VERSION 0.1.0)

Message(STATUS "CMakeLists.txt [app]")
cmake_print_variables(CMAKE_PROJECT_NAME)
cmake_print_variables(PROJECT_NAME)

file(GLOB PROJ_SRC "*.h" "*.cpp")
add_executable(${PROJECT_NAME} ${PROJ_SRC})
target_link_libraries(${PROJECT_NAME} PRIVATE mult adder)