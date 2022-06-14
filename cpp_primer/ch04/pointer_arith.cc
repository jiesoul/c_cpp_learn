#include <iostream>

int main()
{
  int ia[] = {0, 2, 4, 6, 8};
  int last = *(ia + 5);
  std::cout << last << std::endl;
  last = *ia + 4;
  std::cout << last << std::endl;
  return 0;
}
