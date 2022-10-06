//
// Created by david on 06.10.22.
//

#ifndef CMAKE_GITHUB_ADD_OPERATIONS_H
#define CMAKE_GITHUB_ADD_OPERATIONS_H

#include <exception>
#include <stdexcept>
#include <iostream>

namespace math_git {
class operations {
public:
  int sum(const int &a, const int &b);
  int mult(const int &a, const int &b);
  int div(const int &a, const int &b);
  int sub(const int &a, const int &b);
};
};
}

#endif //CMAKE_GITHUB_ADD_OPERATIONS_H
