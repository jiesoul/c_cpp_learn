//
// Created by JIESOUL on 2019/9/16.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH15_D_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH15_D_H
#include "Base.h"
class D : public Base {
public:
  D(const D& d): Base(d) { }
  D(D&& d): Base(std::move(d)) { }
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH15_D_H
