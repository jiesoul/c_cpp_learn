//
// Created by JIESOUL on 2019/9/4.
//
#include <iostream>
using std::cout;
using std::endl;
void swapInt(int *i1, int *i2)
{
  int temp = *i1;
  *i1 = *i2;
  *i2 = temp;
}

int main()
{
  int a = 3, b = 4;
  swapInt(&a, &b);
  cout << "a is " << a << " b is " << b << endl;
  return 0;
}

