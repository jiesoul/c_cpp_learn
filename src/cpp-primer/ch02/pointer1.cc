#include <iostream>

int main()
{
  int ival = 42;
  int *p = &ival;
  std::cout << *p << std::endl;
  return 0;
}
