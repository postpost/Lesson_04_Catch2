cmake_minimum_required(VERSION 3.20) 
project(ListNodeProject) 
add_executable(ListNodeProject main.cpp ListNode.hpp ListNode.cpp List.hpp List.cpp) 

add_subdirectory(../../Lesson_04/Catch2 ../Catch2Build) 
add_executable(ListNodeTest test-main.cpp ListNode.hpp ListNode.cpp List.hpp List.cpp) 
target_link_libraries(ListNodeTest PRIVATE Catch2::Catch2)

