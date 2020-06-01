#include <iostream>

int main()
{
  bool b = 42;
  std::cout << "b is " << b << std::endl;
  int i = b;
  std::cout << "i has value " << i << std::endl;
  i = 3.14;
  std::cout << "i has value " << i << std::endl;
  double pi = i;
  std::cout << "pi has value " << pi << std::endl;
  unsigned char c = -1;
  std::cout << "assuming 8-bit chars, c has value " << c << std::endl;
  unsigned char c2 = 256;
  std::cout << "assuming 8-bit chars, c2 has value " << c2 << std::endl;
}
