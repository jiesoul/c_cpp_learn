//
// Created by jiesoul on 2019/10/15.
//
#include <forward_list>
#include "../stl/print.h"
using namespace std;

int main()
{
  forward_list<int> list = {1, 2, 3, 4, 5, 97, 98, 99};

  auto posBefore = list.before_begin();
  for (auto pos = list.begin(); pos != list.end(); ++pos, ++posBefore) {
    if (*pos % 2 == 0) {
      break;
    }
  }

  list.insert_after(posBefore, 42);
  PRINT_ELEMENTS(list);
}
