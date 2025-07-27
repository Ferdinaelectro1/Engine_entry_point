cmake_minimum_required(VERSION 3.2)

project(Engine_test)

add_executable(
    ${PROJECT_NAME}
    engine/main.cpp 
    engine/application.cpp
    myApp/myapp.cpp
)

