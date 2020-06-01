//
// Created by JIESOUL on 2019/9/19.
//
#include "error_msg.cpp"
#include <iostream>
#include <string>
using namespace std;
int main()
{
  error_msg(ErrCode(42), {"functionX", "f1", "f2"});
  error_msg(ErrCode(0), {"functionX", "okay"});
  return 0;
}
