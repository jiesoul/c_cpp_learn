//
// Created by JIESOUL on 2019/9/9.
//
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
bool find(vector<int> vec, int v)
{
  auto begin = vec.begin();
  auto end = vec.end();
  while (begin != end) {
    if (*begin == v) {
      return true;
    }
    ++begin;
  }
  return false;
}

int main()
{
  vector<int> vec = {1, 2, 4, 5, 6, 7, 9};
  int i = 3;
  cout << find(vec, i) << endl;
  return 0;
}
