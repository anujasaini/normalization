#include <iostream>
#include <fstream>
#include "normalization_module.hpp"

int main() {
    const int input_size = 5;
    const int output_size = 3;
    const int num_samples = 10;

    // Generate random input samples
    Eigen::MatrixXd input_samples = Eigen::MatrixXd::Random(num_samples, input_size);

    // Create and use the NormalizationModule
    NormalizationModule module(input_size, output_size);
    Eigen::MatrixXd output_samples = module.forward(input_samples);

    // Save input and output samples
    std::ofstream input_file("input_samples.txt");
    input_file << input_samples;
    input_file.close();

    std::ofstream output_file("output_samples.txt");
    output_file << output_samples;
    output_file.close();

    return 0;
}
