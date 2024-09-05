### Normalization Module C++ Implementation

### Overview

This project includes a C++ implementation of a normalization module which performs column-wise normalization and applies a linear transformation. It also includes instructions for building and running the project.

### Prerequisites

Ensure you have the following installed on your system:

- **CMake**: For configuring and building the project.
- **A C++ Compiler**: Such as `g++` or `clang++`.
- **Eigen**: A C++ template library for linear algebra.

#### Setup

#### 1. Clone the Repository
Clone the repository to your local machine and navigate to the project directory:
```git clone <repository-url>```
```cd <repository-directory>```

#### 2. Install Eigen
```brew install eigen```

#### 3. Configure the Project
Create a build directory and configure the project using CMake:
```mkdir build```
```cd build```
```cmake ..```

#### 4. Build the Project
Compile the project using CMake. This will generate the executable for the normalization module:
```cmake --build .```

#### 5. Running the Executable
After building the project, run the executable to generate and process random input samples:
```./normalization_module```

#### 6. The executable will:

- Generate 10 random input samples.
- Pass the samples through the normalization module.
- Save the input and output samples in input_samples.txt and output_samples.txt, respectively.





