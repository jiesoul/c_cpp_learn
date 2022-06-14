//
// Created by JIESOUL on 2019/9/19.
//
#include <iostream>
using namespace std;
void swap_int(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}
int main()
{
  int a = 3, b = 4;
  int &c = 3, &d = b;
  swap_int(c, d);
  cout << "a is " << a << " b is " << b;
}

