//
// Created by JIESOUL on 2019/9/16.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH16_BLOBPTR_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH16_BLOBPTR_H
#include "Blob.h"
template <typename T> class BlobPtr {
public:
  BlobPtr(): curr(0) { }
  BlobPtr(Blob<T> &a, size_t sz = 0): wptr(a.data), curr(sz) { }
  T& operator*() const
  { auto p = check(curr, "dereference past end");
    return (*p)[curr];
  }
  BlobPtr&operator++();
  BlobPtr&operator--();
private:
  std::shared_ptr<std::vector<T>> check(std::size_t, const std::string&) const;
  std::weak_ptr<std::vector<T>> wptr;
  std::size_t curr;
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH16_BLOBPTR_H
