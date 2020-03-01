//
// Created by JIESOUL on 2019/9/24.
//

#ifndef C_CPP_LEARN_SRC_CPL_CH02_COMPLEX_H
#define C_CPP_LEARN_SRC_CPL_CH02_COMPLEX_H

class complex {
  double re, im;
public:
  complex(double r, double i) { re = r; im = i; }
  complex(double r) { re = r, im = 0; }
  complex() { re = im = 0; }

  friend complex operator+(complex, complex);
  friend complex operator-(complex, complex);
  friend complex operator~(complex);
  friend complex operator*(complex, complex);
  friend complex operator/(complex, complex);
  friend complex operator==(complex, complex);
  friend complex operator!=(complex, complex);
};

#endif //C_CPP_LEARN_SRC_CPL_CH02_COMPLEX_H
