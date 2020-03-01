//
// Created by jiesoul on 2019/10/16.
//
#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
#include "../stl/print.h"
#include "assoiter.h"
int main()
{
  std::unordered_set<int> coll;
  
  asso_insert_iterator<decltype(coll)> iter(coll);
  *iter = 1;
  iter++;
  *iter = 2;
  iter++;
  *iter = 3;
  
  PRINT_ELEMENTS(coll);
  
  asso_inserter(coll) = 44;
  asso_inserter(coll) = 55;
  
  PRINT_ELEMENTS(coll);
  
  std::vector<int> vals = { 3, 67, -4, 13, 5, 2};
  std::copy (vals.begin(), vals.end(), asso_inserter(coll));
  PRINT_ELEMENTS(coll);
}

