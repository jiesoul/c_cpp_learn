//
// Created by JIESOUL on 2019/10/17.
//
#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include "../stl/print.h"
using namespace std;

class IntSequence {
 private:
  int value;
 public:
  IntSequence (int initialValue) : value(initialValue) {}
  int operator() () {
    return ++value;
  }
};

int main()
{
  list<int> coll;
  generate_n(back_inserter(coll), 9, IntSequence(1));
  PRINT_ELEMENTS(coll);
  generate(next(coll.begin()), prev(coll.end()),IntSequence(42));
  PRINT_ELEMENTS(coll);
}
