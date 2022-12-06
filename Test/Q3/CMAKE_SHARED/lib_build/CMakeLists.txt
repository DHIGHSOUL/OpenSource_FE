cmake_minimum_required(VERSION 3.0.2)
project(reverseShared)
find_package(Threads)
set(CMAKE_BUILD_TYPE Release)

include_directories(bus display gpio motor network sensor)
file(GLOB_RECURSE SOURCES "./*.c")

add_library(reverseShared SHARED ${SOURCES})
target_link_libraries(reverseShared ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS reverseShared DESTINATION /usr/bin)