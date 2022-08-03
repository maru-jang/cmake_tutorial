//
// Created by jang on 22. 8. 3.
//

#ifndef HELLO_CMAKE_CLASS_HPP
#define HELLO_CMAKE_CLASS_HPP

#include "opencv2/opencv.hpp"
#include "Eigen/Dense"

class Class
{
public:
    Class() =  default;

private:
    cv::Mat cv_mat_;
    Eigen::Matrix3d eigen_mat_;

};

#endif //HELLO_CMAKE_CLASS_HPP
