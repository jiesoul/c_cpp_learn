//
// Created by jiesoul on 2019/9/11.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH15_DERIVED_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH15_DERIVED_H
#include "Base.h"
class Derived : private Base {
  void f(const Derived&);
public:
  using Base::size;
protected:
  using Base::n;
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH15_DERIVED_H
