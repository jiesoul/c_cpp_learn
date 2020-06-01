//
// Created by JIESOUL on 2019/10/10.
//

#ifndef C_CPP_LEARN_SRC_CPP_STL_PRINTTUPLE_H_
#define C_CPP_LEARN_SRC_CPP_STL_PRINTTUPLE_H_
#include <tuple>
#include <iostream>

template <int IDX, int MAX, typename... Args>
struct PRINT_TUPLE {
  static void print(std::ostream& os, const std::tuple<Args...>& t) {
    os << std::get<IDX>(t) << (IDX+1 == MAX ? "" : ",");
    PRINT_TUPLE<IDX+1, MAX, Args...>::print(os, t);
  }
};

template <int MAX, typename... Args>
struct PRINT_TUPLE<MAX, MAX, Args...> {
  static void print(std::ostream& os, const std::tuple<Args...>& t) {

  }
};

template <typename... Args>
std::ostream& operator << (std::ostream& os, const std::tuple<Args...>& t) {
  os << "[";
  PRINT_TUPLE<0, sizeof...(Args), Args...>::print(os, t);
  return os << "]";
}
#endif //C_CPP_LEARN_SRC_CPP_STL_PRINTTUPLE_H_
