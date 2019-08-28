#include <iostream>
using std::cout;
using std::endl;

void print(const char *cp)
{
  if (cp)
    while (*cp)
      cout << *cp++;
}

void print2(const int *beg, const int *end)
{
  while(beg != end)
    cout << *begin++ << endl;
}

void print3(const int ia[], size_t size)
{
  for (size_t i = 0; i != size; ++i) {
    cout << ia[i] << endl;
  }
}

void print4(int (&arr)[10])
{
  for (auto elem : arr)
    cout << elem << endl;
}
