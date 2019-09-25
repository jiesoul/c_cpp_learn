//
// Created by JIESOUL on 2019/9/24.
//

#ifndef C_CPP_LEARN_SRC_CPL_CH10_CLUB_H
#define C_CPP_LEARN_SRC_CPL_CH10_CLUB_H
#include "Table.h"
#include "Date.h"
class Club {
  string name;
  Table members;
  Table officers;
  Date founded;

public:
  Club(const string& n, Date fd);
};

#endif //C_CPP_LEARN_SRC_CPL_CH10_CLUB_H
