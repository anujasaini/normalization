cmake_minimum_required(VERSION 3.10)
project(normalization_module)

set(CMAKE_CXX_STANDARD 17)

# Find Eigen
find_package(Eigen3 3.3 REQUIRED NO_MODULE)

include_directories(/opt/homebrew/include/eigen3)

# Add the source files
add_executable(normalization_module
    src/main.cpp
    src/normalization_module.cpp
)


