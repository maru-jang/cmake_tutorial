//
// Created by jang on 22. 8. 2.
//

#ifndef HELLO_CMAKE_CLASSMAT_HPP
#define HELLO_CMAKE_CLASSMAT_HPP

#include "opencv2/opencv.hpp"

class ClassMat
{
public:
    ClassMat() =  default;

private:
    cv::Mat cv_mat_;
};

#endif //HELLO_CMAKE_CLASSMAT_HPP
