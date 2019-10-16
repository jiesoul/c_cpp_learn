//
// Created by JIESOUL on 2019/10/16.
//
#include <iterator>
#include <vector>
#include <iostream>

int main()
{
  int vals[] = {33, 67, -4, 13, 5, 2};
  std::vector<int> v(std::begin(vals), std::end(vals));
  std::copy(std::begin(v), std::end(v), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;
}
