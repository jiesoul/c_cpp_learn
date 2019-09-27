//
// Created by JIESOUL on 2019/9/27.
//

#include "P.h"
int main()
{
  P x(77, 5);
  P y{77,5};
  P z {77, 5, 42};
  P v = {77, 5};
//  P w = {77, 5, 42}; //ERROR 赋值相当于隐式转换，所以不允许。

  return 0;
}
