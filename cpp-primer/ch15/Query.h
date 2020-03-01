//
// Created by JIESOUL on 2019/9/16.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH15_QUERY_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH15_QUERY_H
#include "Query_base.h"
#include "QueryResult.h"
#include "TextQuery.h"
#include <string>
#include <memory>
class Query {
  friend Query operator~(const Query &);
  friend Query operator|(const Query&, const Query&);
  friend Query operator&(const Query&, const Query&);
public:
  Query(const std::string&);
  QueryResult eval(const TextQuery &t) const { return q->eval(t); }
  std::string rep() const { return q->rep(); }
private:
  Query(std::shared_ptr<Query_base> query): q(query) { }
  std::shared_ptr<Query_base> q;
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH15_QUERY_H
