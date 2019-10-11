//
// Created by JIESOUL on 2019/10/11.
//
#include <chrono>
#include "clock.h"
int main()
{
  std::cout << "system_clock: " << std::endl;
  printClockData<std::chrono::system_clock>();
  std::cout << "\nhigh_resolution_clock: " << std::endl;
  printClockData<std::chrono::high_resolution_clock>();
  std::cout << "\nsteady_clock: " << std::endl;
  printClockData<std::chrono::steady_clock>();
}
