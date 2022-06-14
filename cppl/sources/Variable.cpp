//
// Created by jiesoul on 2020/2/24.
//

#include "Variable.h"

double get_value(string s)
{
  for (const Variable& v : var_table) {
    if (v.name == s) return v.value;
  }
  cerr < "get: undefined variable " << s;
}

double set_value(string s, double d)
{
  for (Variable& v : var_table)
    if (v.name == s) {
      v.value = d;
      return;
    }
  cerr << "set: undefined variable " << s;
}