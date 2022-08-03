//
// Created by jang on 22. 8. 3.
//

#include "module1/ClassMat.hpp"
#include "module2/ClassEigenMat.hpp"
#include <iostream>
int main() {
    const auto mat_module1 = ClassMat();
    const auto mat_module2 = ClassEigenMat();
    std::cout<< "Sucess!!!!"<<std::endl;
    return 0;
}