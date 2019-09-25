//
// Created by JIESOUL on 2019/9/24.
//

#ifndef C_CPP_LEARN_SRC_CPL_CH11_COMPLEX_H
#define C_CPP_LEARN_SRC_CPL_CH11_COMPLEX_H

class complex {
  double re, im;
public:
  complex(): re(0), im(0) { }
  complex(double r): re(r), im(0) { }
  complex(double r = 0, double i = 0): re(r), im(i) { }
  complex(const complex& c): re(c.re), im(c.im) { }
  double real() const { return re; }
  double imag() const { return im; }
  complex& operator+=(complex a);
  complex&operator+=(double d);
};
complex operator+(complex);
complex operator-(complex);

#endif //C_CPP_LEARN_SRC_CPL_CH11_COMPLEX_H
