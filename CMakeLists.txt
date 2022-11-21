cmake_minimum_required(VERSION 3.21)
project(Qt1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Qt1 main.cpp)

cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# You may need to adjust this, especially if you picked a different install directory
# You may need to verify the path where the cmake directory is on your machine
set(CMAKE_PREFIX_PATH "C:\\Qt\\5.15.2\\mingw81_64\\lib\\cmake")

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)
target_link_libraries(Qt1 Qt5::Core)
target_link_libraries(Qt1 Qt5::Widgets)

