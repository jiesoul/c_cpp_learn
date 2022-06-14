//
// Created by JIESOUL on 2019/9/27.
//
#include <cassert>
#include <cstring>
#include <iostream>
using namespace std;
template <typename T, typename U> int bit_copy(T& a, U& b)
{
  assert(sizeof(b) == sizeof(a));
  memcpy(&a, &b, sizeof(b));
};

int main()
{
  int a = 0x2468;
  double b;
  bit_copy(a, b);
  cout << "a = " << a << " b = " << b << endl;
  return 0;
}

