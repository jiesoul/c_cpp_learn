//
// Created by JIESOUL on 2019/9/16.
//

#include "NotQuery.h"
#include "Query.h"
#include <set>
#include <memory>
using std::set;
using std::make_shared;
inline Query operator~(const Query &operand)
{
  return std::shared_ptr<Query_base>(new NotQuery(operand));
}
QueryResult NotQuery::eval(const TextQuery &text) const
{
  auto result = query.eval(text);
  auto ret_lines = make_shared<set<line_no>>();
  auto beg = result.begin(), end = result.end();
  auto sz = result.get_file()->size();
  for (size_t n = 0; n != sz; ++n) {
    if (beg == end || *beg != n)
      ret_lines->insert(n);
    else if (beg != end)
      ++beg;
  }
  return QueryResult(rep(), ret_lines, result.get_file());
}
