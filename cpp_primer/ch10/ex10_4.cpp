//
// Created by zhangyunjie on 2019/8/30.
//
#include <iostream>
#include <numeric>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::accumulate;
int main()
{
  const vector<double> vec{1.2, 1.3, 3.4, 3.9, 5.9};
  double sum = accumulate(vec.cbegin(), vec.end(), 0.0);
  cout << "sum is " << sum << endl;
  return 0;
}
