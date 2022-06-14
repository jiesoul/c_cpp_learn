//
// Created by JIESOUL on 2019/10/11.
//
#include <algorithm>
bool int_ptr_less(int* a, int* b)
{
  return *a < *b;
}

int main()
{
  int x = 17;
  int y = 42;
  int z = 33;
  int* px = &x;
  int* py = &y;
  int* pz = &z;

  int* max = std::max(px, py, int_ptr_less);

  std::pair<int*, int*> extremes = std::minmax({px, py, pz}, int_ptr_less);
}
