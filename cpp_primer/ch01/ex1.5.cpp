#include <iostream>

int main()
{
  std::cout << "Enter two number: " << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << v1;
  std::cout << " multi ";
  std::cout << v2;
  std::cout << " = ";
  std::cout << v1 * v2 << std::endl;
  return 0;
}
