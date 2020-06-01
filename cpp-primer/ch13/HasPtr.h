//
// Created by JIESOUL on 2019/9/11.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH13_HASPTR_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH13_HASPTR_H
#include <string>
class HasPtr {
  friend void swap(HasPtr&, HasPtr&);
public:
  HasPtr(const std::string &s = std::string()):
    ps(new std::string(s)), i(0) {}
private:
  std::string *ps;
  int i;
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH13_HASPTR_H
