//
// Created by JIESOUL on 2019/10/10.
//
#include <iostream>
#include <functional>
std::function<int(int, int)> returnLambda()
{
  return [](int x, int y) {
    return x*y;
  };
}

int main()
{
  auto lf = returnLambda();
  std::cout << lf(6, 7) << std::endl;
  return 0;
}

