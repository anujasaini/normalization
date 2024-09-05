#pragma once
#include <Eigen/Dense>

class NormalizationModule {
public:
    NormalizationModule(int input_size, int output_size);
    Eigen::MatrixXd forward(const Eigen::MatrixXd& input);

private:
    Eigen::MatrixXd weights;
    Eigen::VectorXd bias;
    void normalize(Eigen::MatrixXd& matrix);
};
