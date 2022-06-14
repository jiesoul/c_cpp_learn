//
// Created by JIESOUL on 2019/9/24.
//

#ifndef C_CPP_LEARN_SRC_CPL_CH02_VEC_H
#define C_CPP_LEARN_SRC_CPL_CH02_VEC_H
#include <vector>
using std::vector;
template<class T> class Vec : public vector<T> {
public:
  Vec(): vector<T>() { }
  Vec(int s): vector<T>(s) { }
  T&operator[](int i) { return at(i); }
  const T&operator[](int i) const { return at(i); }
};
#endif //C_CPP_LEARN_SRC_CPL_CH02_VEC_H
