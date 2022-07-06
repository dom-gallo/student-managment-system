cmake_minimum_required (VERSION 3.10)
project(student_management_sys VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)

add_executable(
    student_management_sys
    src/main.cpp src/ViewManager.cpp
    src/Student.cpp src/StudentRepo.cpp
)