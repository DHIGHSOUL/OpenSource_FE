cmake_minimum_required(VERSION 3.0.2)
project(ReverseCopy)
find_package(Threads)
set(CMAKE_BUILD_TYPE Release)

include_directories(bus display gpio motor network sensor)
file(GLOB_RECURSE SOURCES "./*.c")

add_library(ReverseCopy SHARED ${SOURCES})
target_link_libraries(ReverseCopy ${CMAKE_THREAD_LIBS_INIT})
install (TARGETS ReverseCopy DESTINATION /usr/lib)
