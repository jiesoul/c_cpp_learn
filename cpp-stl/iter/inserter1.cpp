//
// Created by JIESOUL on 2019/10/16.
//
#include <set>
#include <list>
#include <algorithm>
#include <iterator>
#include "../stl/print.h"
using namespace std;

int main()
{
  set<int> coll;
  insert_iterator<set<int>> iter(coll, coll.begin());
  *iter = 1;
  iter++;
  *iter = 2;
  iter++;
  *iter = 3;
  PRINT_ELEMENTS(coll, "set:   ");

  inserter(coll, coll.end()) = 44;
  inserter(coll, coll.end()) = 55;
  PRINT_ELEMENTS(coll, "set:  ");

  list<int> coll2;
  copy(coll.begin(), coll.end(), inserter(coll2, coll2.begin()));
  PRINT_ELEMENTS(coll2, "list: ");
  copy(coll.begin(), coll.end(), inserter(coll2, ++coll2.begin()));

  PRINT_ELEMENTS(coll, "list: ");

}
