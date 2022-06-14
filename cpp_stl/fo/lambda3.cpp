//
// Created by JIESOUL on 2019/10/17.
//
#include <iostream>
#include <list>
#include <algorithm>
#include "../stl/print.h"
using namespace std;
int main()
{
  list<int> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  PRINT_ELEMENTS(coll, "coll:           ");
  
  list<int>::iterator pos;
  int count = 0;
  pos = remove_if(coll.begin(), coll.end(),
      [count] (int) mutable {
    return ++count == 3;
  });
  coll.erase(pos, coll.end());
  PRINT_ELEMENTS(coll, "3rd removed:  ");
}
