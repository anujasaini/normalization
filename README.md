#### PyTorch & C++ Normalization and Linear Layer Module
Overview
This project implements a normalization and linear layer module in both PyTorch (Python) and C++ to showcase how to process input data through a module, save the results, and compare the outputs between the two implementations.

The module does the following:

- Normalization: Normalizes the input along each column such that the sum of squares of all elements in a column equals 1.
- Linear Layer: Implements a linear transformation using a learnable weight matrix.

#### Task Breakdown
###### PyTorch Implementation:

Create a PyTorch module that normalizes input along each column and applies a linear layer.
Generate 10 random input samples and pass them through the module.
Save the input and output samples.

###### C++ Implementation:

Create a similar module in C++ using Eigen for linear algebra operations.
Assert that the results from the PyTorch and C++ implementations are close (or the same).

###### Prerequisites
For both implementations, ensure you have the following installed on your system:

```bash
Python 3.6 or higher (for PyTorch)
PyTorch
Eigen (for C++)
C++ compiler (such as g++ or clang++)
CMake (for building the C++ code)
```