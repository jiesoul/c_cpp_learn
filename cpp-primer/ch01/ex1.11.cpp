//
// Created by JIESOUL on 2019/9/3.
//
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
  int i1, i2;
  cout << "please enter two number: " << endl;
  cin >> i1 >> i2;
  while (i1 != i2) {
    if (i1 > i2) {
      ++i2;
      cout << i2 << " ";
    } else {
      ++i1;
      cout << i1 << " ";
    }
  }

  return 0;
}
