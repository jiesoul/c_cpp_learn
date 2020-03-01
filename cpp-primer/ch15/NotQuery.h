//
// Created by JIESOUL on 2019/9/16.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH15_NOTQUERY_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH15_NOTQUERY_H
#include "Query_base.h"
#include "Query.h"
#include "QueryResult.h"
class NotQuery: public Query_base {
  friend Query operator~(const Query &);
  NotQuery(const Query &q): query(q) { }
  std::string rep() const { return "~(" + query.rep() + ")"; }
  QueryResult eval(const TextQuery&) const;
  Query query;
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH15_NOTQUERY_H
