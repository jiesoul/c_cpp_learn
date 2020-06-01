//
// Created by JIESOUL on 2019/10/10.
//
#include <iostream>
using namespace std;
int main()
{
  int x = 0;
  int y = 42;
  auto qqq = [x, &y] {
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    ++y;
  };
  x = y = 77;
  qqq();
  qqq();
  cout << "final y: " << y << endl;
  return 0;
}