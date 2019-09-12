//
// Created by jiesoul on 2019/9/11.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH15_BASE_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH15_BASE_H

class Base {
  friend class Pal;
public:
  static void statmem();
  void pub_mem();
  std::size_t size() const { return n; }
  virtual int fcn();
protected:
  int prot_mem;
  std::size_t n;
private:
  char priv_mem;
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH15_BASE_H
