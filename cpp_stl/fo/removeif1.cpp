//
// Created by JIESOUL on 2019/10/17.
//
#include <iostream>
#include <list>
#include <algorithm>
#include "../stl/print.h"
using namespace std;

class Nth {
 private:
  int nth;
  int count;
 public:
  Nth (int n): nth(n), count(0) {
    
  }
  bool operator()(int) {
    return ++count == nth;
  }
};

int main()
{
  list<int> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  PRINT_ELEMENTS(coll);
  list<int>::iterator pos;
  pos = remove_if(coll.begin(), coll.end(), Nth(3));
  coll.erase(pos,coll.end());
  PRINT_ELEMENTS(coll);
}
