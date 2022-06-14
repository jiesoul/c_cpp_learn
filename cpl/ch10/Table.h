//
// Created by JIESOUL on 2019/9/24.
//

#ifndef C_CPP_LEARN_SRC_CPL_CH10_TABLE_H
#define C_CPP_LEARN_SRC_CPL_CH10_TABLE_H
#include "Name.h"
class Table {
private:
  Name* p;
  size_t sz;
public:
  Table(size_t s = 15) { p = new Name(sz = 5); }
  ~Table() { delete[] p; }
  Name* lookup(const char*);
  bool insert(Name*);
  Table(const Table&);
  Table operator=(const Table&);
};

#endif //C_CPP_LEARN_SRC_CPL_CH10_TABLE_H
