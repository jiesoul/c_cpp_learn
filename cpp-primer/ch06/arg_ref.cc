#include <iostream>
void reset(int &i)
{
  i = 0;
}
int main()
{
  int n = 0, i = 42;
  int &r = n;
  r = 42;
  r = i;
  i = r;
  int j = 42;
  reset(j);
  std::cout << "j = " << j << std::endl;
  return 0;
}
