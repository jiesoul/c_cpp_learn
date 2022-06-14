//
// Created by JIESOUL on 2019/9/16.
//

#include "BlobPtr.h"
template <typename T> BlobPtr<T> BlobPtr<T>::operator++(int)
    {
  BlobPtr ret = *this;
  ++*this;
  return ret;
    }
