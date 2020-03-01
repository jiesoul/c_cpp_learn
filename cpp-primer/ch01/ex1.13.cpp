//
// Created by JIESOUL on 2019/9/17.
//
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
  int sum = 0;
  for (int i = 50; i <= 100; i++) {
    sum += i;
  }
  cout << "sum of 50 to 100 is " << sum << endl;
  for(int i = 10; i >=0; i--) {
    cout << i << " ";
  }
  cout << endl;
  int i1, i2;
  cout << "please enter two integers: ";
  cin >> i1 >> i2;
  for(;i1 != i2;) {
    if (i1 > i2) {
      cout << ++i2 << " ";
    } else {
      cout << ++i1 << " ";
    }
  }
}
