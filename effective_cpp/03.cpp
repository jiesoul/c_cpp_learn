//
// Created by JIESOUL on 2019/9/25.
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
  char greeting[] = "hello";
  char* p = greeting;
  const char* p = greeting;
  const char* const p = greeting;
}
