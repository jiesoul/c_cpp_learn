//
// Created by JIESOUL on 2019/9/19.
//
#include <iostream>
#include <string>
using namespace std;
void error_msg(initializer_list<string> ls)
{
  for (auto beg = ls.begin(); beg != ls.end(); ++beg)
    cout << *beg << " ";
  cout << endl;
}
void error_msg(ErrCode e, initializer_list<string> il)
{
  cout << e.msg() << ": ";
  for (const auto &elem : il)
    cout << elem << " ";
  cout << endl;
}
