//
// Created by JIESOUL on 2019/9/16.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH15_BINARYQUERY_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH15_BINARYQUERY_H
#include "Query_base.h"
#include "Query.h"
#include <string>
class BinaryQuery: public Query_base {
protected:
  BinaryQuery(const Query &l, const Query &r, std::string s):
  lhs(l), rhs(r), opSym(s) { }
  std::string rep() const { return "(" + lhs.rep() + " " + opSym + " " + rhs.rep() + ")"; }
  Query lhs, rhs;
  std::string opSym;
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH15_BINARYQUERY_H
