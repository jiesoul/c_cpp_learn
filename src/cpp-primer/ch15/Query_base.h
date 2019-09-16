//
// Created by JIESOUL on 2019/9/16.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH15_QUERY_BASE_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH15_QUERY_BASE_H
#include "Query.h"
#include "TextQuery.h"
#include "QueryResult.h"
class Query_base {
  friend class Query;
protected:
  using line_no = TextQuery::line_no;
  virtual ~Query_base() = default;
private:
  virtual QueryResult eval(const TextQuery&) const = 0;
  virtual std::string rep() const = 0;
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH15_QUERY_BASE_H
