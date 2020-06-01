//
// Created by JIESOUL on 2019/10/16.
//
#include <list>
#include <algorithm>
#include <iterator>
#include "../stl/print.h"
using namespace std;
int main()
{
  list<int> coll;
  front_insert_iterator<list<int>> iter(coll);
  
  *iter = 1;
  iter++;
  *iter = 2;
  iter++;
  *iter = 3;
  PRINT_ELEMENTS(coll);
  
  front_inserter(coll) = 44;
  front_inserter(coll) = 55;
  PRINT_ELEMENTS(coll);
  
  copy(coll.begin(), coll.end(), front_inserter(coll));
  PRINT_ELEMENTS(coll);
}

