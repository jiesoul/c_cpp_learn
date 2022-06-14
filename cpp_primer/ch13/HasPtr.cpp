//
// Created by JIESOUL on 2019/9/11.
//

#include "HasPtr.h"
inline void swap(HasPtr &lhs, HasPtr &rhs)
{
  using std::swap;
  swap(lhs.ps, rhs.ps);
  swap(lhs.i, rhs.i);
}