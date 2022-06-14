//
// Created by JIESOUL on 2019/9/24.
//

#include "complex.h"
complex complex::operator+(complex a1, complex a2)
{
  return complex(a1.re + a2.re, a1.im + a2.im);
}
