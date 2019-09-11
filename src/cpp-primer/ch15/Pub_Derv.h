//
// Created by jiesoul on 2019/9/11.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH15_PUB_DERV_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH15_PUB_DERV_H
#include "Base.h"
class Pub_Derv : public Base {
  int f() { return prot_mem; }
//  char g() { return priv_mem;}
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH15_PUB_DERV_H
