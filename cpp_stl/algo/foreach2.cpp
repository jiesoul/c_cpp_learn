//
// Created by JIESOUL on 2019/10/17.
//
#include "algostuff.h"
using namespace std;
int main()
{
  vector<int> coll;
  INSERT_ELEMENTS(coll,1,9);
  for_each(coll.begin(), coll.end(),
      [](int& elem) {
    elem += 10;
  });
  PRINT_ELEMENTS(coll);
  
  for_each(coll.begin(), coll.end(),
      [=](int& elem) {
    elem += *coll.begin();
  });
  PRINT_ELEMENTS(coll);
}
