//
// Created by JIESOUL on 2019/10/17.
//

#ifndef C_CPP_LEARN_SRC_CPP_STL_ALGO_ALGOSTUFF_H_
#define C_CPP_LEARN_SRC_CPP_STL_ALGO_ALGOSTUFF_H_
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <iterator>
#include <functional>
#include <numeric>
#include <iostream>
#include <string>

template <typename T>
inline void INSERT_ELEMENTS(T& coll, int first, int last)
{
  for (int i = first; i <= last; ++i) {
    coll.insert(coll.end(),i);
  }
}

template <typename T>
inline void PRINT_ELEMENTS (const T& coll, const std::string& optcstr="")
{
  std::cout << optcstr;
  for (auto elem : coll) {
    std::cout << elem << ' ';
  }
  std::cout << std::endl;
}

template <typename T>
inline void PRINT_MAPPED_ELEMENTS (const T& coll, const std::string& optcstr="")
{
  std::cout << optcstr;
  for (auto elem : coll) {
    std::cout << '[' << elem.first << ',' << elem.second << "] ";
  }
  std::cout << std::endl;
}
#endif //C_CPP_LEARN_SRC_CPP_STL_ALGO_ALGOSTUFF_H_
