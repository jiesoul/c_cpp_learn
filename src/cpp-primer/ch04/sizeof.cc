#include <iostream>
#include "../ch02/Sales_data.h"
int main()
{
  Sales_data data, *p;
  std::cout << sizeof(Sales_data) << std::endl;
  std::cout << sizeof data << std::endl;
  std::cout << sizeof p << std::endl;
  std::cout << sizeof *p << std::endl;
  std::cout << sizeof data.revenue << std::endl;
  // std::cout << Sales_data::revenue << std::endl;
  return 0;
}
