cmake_minimum_required(VERSION 2.4)
project(example-app4)
add_executable(example-app4 example-app4.c)
install(TARGETS example-app4 RUNTIME DESTINATION bin)