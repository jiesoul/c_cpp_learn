//
// Created by jiesoul on 2020/2/23.
//
#include <iostream>
int main()
{
  int x = 0;
  int y {10};
  int& rx = x;
  rx = 8;

  char* s = "hello";
  char* t = "world";
  char*& r = s;

  std::cout << r << std::endl;

  return 0;
}
