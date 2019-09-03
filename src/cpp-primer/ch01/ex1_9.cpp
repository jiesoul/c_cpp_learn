//
// Created by JIESOUL on 2019/9/3.
//
#include <iostream>
using std::cout;
using std::endl;
int main()
{
  int n = 50;
  int sum = 0;
  while (n < 100) {
    sum += n;
    n++;
  }

  cout << "sum for 50 to 100 is " << sum << endl;
  return 0;
}
