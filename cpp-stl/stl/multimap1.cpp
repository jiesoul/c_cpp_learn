//
// Created by JIESOUL on 2019/10/11.
//
#include <map>
#include <iostream>
#include <string>
using namespace std;

int main()
{
  multimap<int, string> coll;
  
  coll = {{5, "tagged"},
          {2, "a"},
          {1, "this"},
          {4, "of"},
          {6, "strings"},
          {1, "is"},
          {3, "multimap"}};
  
  for (auto elem : coll) {
    cout << elem.second << ' ';
  }
  cout << endl;
    
}
