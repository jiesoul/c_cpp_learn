#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH12_QUERYRESULT_H_
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH12_QUERYRESULT_H_
#include <memory>
#include <string>
#include <iostream>
class QueryResult {
  friend std::ostream& print(std::ostream&, const QueryResult&);
public:
  QueryResult(std::string s,
              std::shared_ptr<std::set<line_no>> p,
              std::shared_ptr<std::vector<std::string>>> f):
  sought(s), lines(p), file(f) { }
private:
  std::sring sought;
  std::shared_ptr<std::set<line_no>> lines;
  std::shared_ptr<std::vector<std::string>> file;
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH12_QUERYRESULT_H_
