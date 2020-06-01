//
// Created by JIESOUL on 2019/10/16.
//
#include <iterator>
#include <list>
#include <algorithm>
#include <iostream>
#include "../stl/print.h"
using namespace std;

int main()
{
  list<int> coll;
  for(int i = 1; i <= 9; ++i) {
    coll.push_back(i);
  }
  
  PRINT_ELEMENTS(coll);
  
  iter_swap(coll.begin(), next(coll.begin()));
  PRINT_ELEMENTS(coll);
  
  iter_swap(coll.begin(), prev(coll.end()));
  PRINT_ELEMENTS(coll);
}
