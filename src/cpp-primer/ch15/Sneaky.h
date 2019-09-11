//
// Created by jiesoul on 2019/9/11.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH15_SNEAKY_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH15_SNEAKY_H
#include "Base.h"
class Sneaky : public Base {
  friend void clobber(Sneaky&);
  friend void clobber(Base&);
  int j;
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH15_SNEAKY_H
