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
  cout << "please enter a number: " << endl;
  cin >> i1;
  cout << "please enter a number that it bigger than before: " << endl;
  cin >> i2;
  while (i1 <= i2) {
    cout << i1 << " ";
    i1++;
  }

  return 0;
}
