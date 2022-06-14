//
// Created by JIESOUL on 2019/9/16.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH15_ORQUERY_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH15_ORQUERY_H
#include "BinaryQuery.h"
class OrQuery: public BinaryQuery {
  friend Query operator|(const Query&, const Query&);
  OrQuery(const Query &left, const Query &right): BinaryQuery(left, right, "|") { }
  QueryResult eval(const TextQuery&) const;
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH15_ORQUERY_H
