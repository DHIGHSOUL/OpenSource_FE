cmake_minimum_required(VERSION 3.0.2)
project(reverseStatic)
find_package(Threads)
set(CMAKE_BUILD_TYPE Release)

include_directories(bus display gpio motor network sensor)
file(GLOB_RECURSE SOURCES "./*.c")

add_library(reverseStatic STATIC ${SOURCES})
target_link_libraries(reverseStatic ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS reverseStatic DESTINATION /usr/bin)