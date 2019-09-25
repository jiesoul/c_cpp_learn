//
// Created by JIESOUL on 2019/9/24.
//

#include "complex.h"
complex& complex::operator+= (complex a)
{
  re += a.re;
  im += a.im;
  return *this;
}
complex& complex::operator+=(double d)
{
  re += a;
  return *this;
}
complex operator+(complex a, complex b)
{
  complex r = a;
  return r+=b;
}
complex operator+(complex a, double d)
{
  complex r = a;
  return r += b;
}
complex operator+(double a, complex b)
{
  complex r = b;
  return r += a;
}
