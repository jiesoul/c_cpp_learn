//
// Created by JIESOUL on 2019/10/11.
//
#include <list>
#include <iostream>
using namespace std;
int main()
{
  list<char> coll;
  for (char c='a'; c <= 'z'; c++) {
    coll.push_back(c);
  }

  for (auto elem : coll) {
    cout << elem << ' ';
  }
  cout << endl;
}
