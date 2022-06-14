//
// Created by JIESOUL on 2019/9/24.
//

#include "Table.h"
Table::Table(const Table &t)
{
  p = new Name[sz=t.sz];
  for (int i = 0; i < sz; i++)
    p[i] = t.p[i];
}
Table Table::operator=(const Table &t) {
  if (this != &t) {
    delete[] p;
    p = new Name[sz=t.sz];
    for (int i = 0; i < sz; ++i) {
      p[i] = t.p[i];
    }
  }
  return *this;
}
