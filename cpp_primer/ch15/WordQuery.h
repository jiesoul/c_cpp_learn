//
// Created by JIESOUL on 2019/9/16.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH15_WORDQUERY_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH15_WORDQUERY_H
#include "Query_base.h"
class WordQuery: public Query_base {
  friend class Query;
  WordQuery(const std::string &s): query_word(s) { }
  QueryResult eval(const TextQuery &t) const { return t.query(query_word)); }
  std::string rep() const { return query_word; }
  std::string query_word;
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH15_WORDQUERY_H
