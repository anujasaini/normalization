#include "normalization_module.hpp"
#include <cmath>

NormalizationModule::NormalizationModule(int input_size, int output_size) {
    weights = Eigen::MatrixXd::Random(output_size, input_size);
    bias = Eigen::VectorXd::Random(output_size);
}

void NormalizationModule::normalize(Eigen::MatrixXd& matrix) {
    for (int i = 0; i < matrix.cols(); ++i) {
        Eigen::VectorXd col = matrix.col(i);
        double norm = col.norm();
        if (norm > 0) {
            matrix.col(i) /= norm;
        }
    }
}

Eigen::MatrixXd NormalizationModule::forward(const Eigen::MatrixXd& input) {
    Eigen::MatrixXd centered = input;
    normalize(centered);
    Eigen::MatrixXd output = weights * centered.transpose();
    return output.transpose();
}
