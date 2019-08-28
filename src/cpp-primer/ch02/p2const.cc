#include <iostream>

int main()
{
  const double pi = 3.14; //常量
  double *ptr = &pi;      // 错误
  const double *cptr = &pi; // ok
  *cptr = 42;               // error
}
