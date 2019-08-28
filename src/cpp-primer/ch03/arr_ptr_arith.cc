#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
  constexpr size_t sz = 5;
  int arr[sz] = {1, 2, 3, 4, 5};
  int *ip = arr;
  int *ip2 = ip + 4;

  int *p = arr + sz;
  // int *p2 = arr + 10; //error overload

  int *b = arr, *e = arr + sz;
  while (b < e) {
    ++b;
  }

  int i = 0, sz = 42;
  

  auto n = end(arr) - begin(arr);
}
