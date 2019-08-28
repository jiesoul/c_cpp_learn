#include <iostream>
#include "Sales_data.h"
int main()
{
  Sales_data total;
  if (std::cin >> total) {
    Sales_data trans;
    while (std::cin >> trans) {
      if (Sales_data::isbn(&total) == trans.isbn()) {
        total.combine(trans);
      } else {
        std::cout << total << std::endl;
        total = trans;
      }
    }
    std::cout << total << std::endl;
  } else {
    std::cerr << "No Date?" << std::endl;
    return -1;
  }
  return 0;
}
