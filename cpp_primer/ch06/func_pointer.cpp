//
// Created by JIESOUL on 2019/9/19.
//
#include <iostream>
#include <string>
using namespace std;
bool lengthCompare(const string &, const string&);
bool (*pf)(const string&, const string&);
int main()
{
  bool b1 = pf("hello", "goodbye");
  bool b2 = (*pf)("hello", "goodbye");
  bool b3 = lengthCompare("hello", "goodbye");

  return 0;
}
