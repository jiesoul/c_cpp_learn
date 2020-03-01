//
// Created by JIESOUL on 2019/9/17.
//
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
  int value;
  int sum = 0;
  while (cin >> value) {
    sum += value;
  }
  cout << "sum is " << sum << endl;
  return 0;
}
