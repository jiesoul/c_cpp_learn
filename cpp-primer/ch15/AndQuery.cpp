//
// Created by JIESOUL on 2019/9/16.
//

#include "AndQuery.h"
#include <memory>
#include <set>
using std::set;
using std::make_shared;
inline Query operator&(const Query &lhs, const Query &rhs)
{
  return std::shared_ptr<Query_base>(new AndQuery(lhs, rhs));
}
QueryResult AndQuery::eval(const TextQuery &text) const
{
  auto left = lhs.eval(text), right = rhs.eval(text);
  auto ret_lines = make_shared<set<line_no>>();
  set_intersection(left.begin(), left.end(), right.begin(), right.end(),
      inserter(*ret_lines, ret_lines->begin()));
  return QueryResult(rep(), ret_lines, left.get_file());
}
