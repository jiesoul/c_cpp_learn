//
// Created by JIESOUL on 2019/9/27.
//
#include <cassert>
using namespace std;
char* ArrayAlloc(int n)
{
  assert(n > 0);
  return new char[n];
}
int main()
{
  char* a = ArrayAlloc(0);
  return 0;
}
