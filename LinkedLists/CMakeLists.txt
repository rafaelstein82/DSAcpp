cmake_minimum_required(VERSION 3.10)
project(MeuProjeto)

set(CMAKE_CXX_STANDARD 20)  # Ou 14, 20, dependendo do seu código
set(CMAKE_CXX_STANDARD_REQUIRED True)


include_directories("/mnt/drive_d/Cursos - Udemy/C++ Data Structures and Algorithms")


add_executable(MeuProjeto main.cpp)