//
// Created by zhangyunjie on 2019/8/30.
//
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::accumulate;
int main()
{
  const vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int sum = accumulate(vec.cbegin(), vec.cend(), 0);
  cout << "sum is " << sum << endl;

  const vector<string> vec2 = {"i" " " "am" " " "back"};
  string ssum = accumulate(vec2.cbegin(), vec2.end(), string(""));
  cout << ssum << endl;
  return 0;
}

