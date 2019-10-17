//
// Created by JIESOUL on 2019/10/17.
//
#include <cstdlib>
#include "algostuff.h"
using namespace std;

bool absLess (int elem1, int elem2)
{
  return abs(elem1) < abs(elem2);
}

int main()
{
  deque<int> coll;

  INSERT_ELEMENTS(coll,2,6);
  INSERT_ELEMENTS(coll,-3,6);

  PRINT_ELEMENTS(coll);

  cout << "minimum: " << *min_element(coll.cbegin(), coll.cend()) << endl;
  cout << "maximum: " << *max_element(coll.cbegin(), coll.cend()) << endl;

  auto mm = minmax_element(coll.cbegin(), coll.cend());
  cout << "min: " << *(mm.first) << endl;
  cout << "max: " << *(mm.second) << endl;
  cout << "distance: " << distance(mm.first, mm.second) << endl;

  cout << "minimum of absolute values: " << *min_element(coll.cbegin(), coll.cend(), absLess);
  cout << "maximum of absolute values: " << *max_element(coll.cbegin(), coll.cend(), absLess);
}