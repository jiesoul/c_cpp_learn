#include <iostream>
#include <string>
using std::string;
int main()
{
  unsigned cnt = 42;
  constexpr unsigned sz = 42;

  int arr[10];
  int *parr[sz];
  string bad[cnt];
  string strs[get_size()];

  const unsigned sz1 = 3;
  int ia1[sz1] = {0, 1, 2};
  int a2[] = {0, 1, 2};
  int a3[5] = {0, 1, 2};
  string a4[3] = {"hi", "bye"};
  int a5[2] = {0, 1, 2};  //error

  char c1[] = {'C', '+', '+'};
  char c2[] = {'C', '+', '+', '\0'};
  char c3[] = "C++";
  const char c4[6] = "Daniel"; //error no space for the null!!

  

  return 0;
}
