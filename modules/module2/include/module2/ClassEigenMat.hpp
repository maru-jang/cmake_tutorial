//
// Created by jang on 22. 8. 3.
//

#ifndef HELLO_CMAKE_CLASSEIGENMAT_HPP
#define HELLO_CMAKE_CLASSEIGENMAT_HPP

#include "Eigen/Dense"
class ClassEigenMat
{
public:
    ClassEigenMat() =  default;

private:
    Eigen::Matrix3d eigen_mat_;

};

#endif //HELLO_CMAKE_CLASSEIGENMAT_HPP
