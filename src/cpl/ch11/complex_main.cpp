//
// Created by JIESOUL on 2019/9/24.
//
#include "complex.h"
void f()
{
  complex a = complex(1, 3.1);
  complex b = complex(1.2, 2);
  complex c = b;

  a = b + c;
  b = b + c * a;
  c = a*b + complex(1,2);
}
