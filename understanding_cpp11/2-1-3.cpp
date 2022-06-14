//
// Created by JIESOUL on 2019/9/27.
//
#include <iostream>
using namespace std;
struct TestStruct {
  TestStruct(): name(__func__) {}
  const char* name;
};
int main()
{
  TestStruct ts;
  cout << ts.name << endl;
  return 0;
}
