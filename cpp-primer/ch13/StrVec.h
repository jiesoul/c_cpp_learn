//
// Created by JIESOUL on 2019/9/11.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH13_STRVEC_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH13_STRVEC_H

#include <string>
class StrVec {
public:
  StrVec():
    elements(nullptr), first_free(nullptr), cap(nullptr) { }
  StrVec(const StrVec&);
  StrVec &operator=(const StrVec&);
  ~StrVec();
  void push_back(const std::string&);
  size_t size() const { return first_free - elements; }
  size_t capacity() const { return cap - element; }
  std::string *begin() const { return elements; }
  std::string *end() const { return first_free; }
  StrVec &operator=(std::initializer_list<std::string>);
  std::string &operator[](std::size_t);
  const std::string &operator[](std::size_t) const;

private:
  Static std::allocator<std::string> alloc;
  void chk_n_alloc() { if (size() == capacity()) reallocate(); }
  std::pair<std::string*, std::string*> alloc_n_copy(const std::string*, const std::string*);
  void free();
  void reallocate();
  std::string *elements;
  std::string *first_free;
  std::string *cap;
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH13_STRVEC_H
