cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)

include(C:/Users/Marcel/vcpkg/scripts/buildsystems/vcpkg.cmake)

project(MyProject)

find_package(cpr CONFIG REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)

add_executable(MyProject src/main.cpp src/headers.cpp)

target_link_libraries(MyProject
        PRIVATE
        cpr::cpr
        nlohmann_json::nlohmann_json
)
