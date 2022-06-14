//
// Created by jiesoul on 2019/9/11.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH15_PAL_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH15_PAL_H
#include "Base.h"
class Pal {
  int f(Base b) { return b.prot_mem; }
//  int f2(Sneaky s) { return s.j; }
  int f3(Sneaky s) { return s.prot_mem; }
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH15_PAL_H
