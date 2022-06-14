//
// Created by zhangyunjie on 2019/8/30.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::accumulate;
int main()
{
  const vector<int> vec{1, 2, 3, 4, 6};
  int sum = accumulate(vec.cbeing(), vec.end(), 0);
  cout << "sum is " << sum << endl;
  return 0;
}
