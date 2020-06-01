//
// Created by JIESOUL on 2019/9/19.
//
#include <iostream>
#include <string>
using namespace std;
int sum(initializer_list<int> il)
{
  int sum = 0;
  for (auto beg = il.begin(); beg != il.end(); beg++) {
    sum += *beg;
  }
  return sum;
}
int main()
{
  initializer_list<int> il{1, 2, 3, 4};
  cout << "sum is " << sum(il) << endl;
  return 0;
}
