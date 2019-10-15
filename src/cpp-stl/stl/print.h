//
// Created by JIESOUL on 2019/10/15.
//

#ifndef C_CPP_LEARN_SRC_CPP_STL_STL_PRINT_H_
#define C_CPP_LEARN_SRC_CPP_STL_STL_PRINT_H_
#include <iostream>
#include <string>

template <typename T>
inline void PRINT_ELEMENTS(const T& coll, const std::string& optstr="")
{
  std::cout << optstr;
  for (const auto& elem : coll) {
    std::cout << elem << ' ';
  }
  std::cout << std::endl;
}
#endif //C_CPP_LEARN_SRC_CPP_STL_STL_PRINT_H_
