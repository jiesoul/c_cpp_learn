//
// Created by JIESOUL on 2019/10/15.
//
#include <set>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
#include "print.h"

int square(int value)
{
  return value * value;
}

int main()
{
  std::set<int> coll1;
  std::vector<int> coll2;
  
  for(int i=1; i<=9; ++i) {
    coll1.insert(i);
  }
  PRINT_ELEMENTS(coll1, "initialized: ");
  
  std::transform(coll1.cbegin(), coll1.cend(), std::back_inserter(coll2), square);
  PRINT_ELEMENTS(coll2, "square:   ");
}
