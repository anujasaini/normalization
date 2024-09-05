# cmake_minimum_required(VERSION 3.10)
# project(NormalizationModule)

# set(CMAKE_CXX_STANDARD 17)

# # include_directories(${PROJECT_SOURCE_DIR}/include)
# # include_directories(${PROJECT_SOURCE_DIR}/include/eigen-3.4.0)

# include_directories(/include)
# include_directories(/include/eigen-3.4.0)

# add_executable(normalization_module
#     src/main.cpp
#     src/normalization_module.cpp)
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


