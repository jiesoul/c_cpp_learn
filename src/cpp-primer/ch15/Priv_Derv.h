//
// Created by jiesoul on 2019/9/11.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH15_PRIV_DERV_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH15_PRIV_DERV_H
#include "Base.h"
class Priv_Derv : private Base {
  int f1() const { return prot_mem; }
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH15_PRIV_DERV_H
