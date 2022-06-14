//
// Created by JIESOUL on 2019/10/16.
//
#include <unordered_set>
#include <iostream>
#include "buckets.h"

int main()
{
  std::unordered_set<int> intest = {1,2,5,7,11,13,17,19};
  printHashTableState(intest);
  
  intest.insert({-7,17,22,4});
  printHashTableState(intest);
}
