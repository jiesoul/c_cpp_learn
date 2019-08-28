#include <iostream>
using std::cout;
using std::endl;
void reset(int *ip)
{
  *ip = 0;
  ip = 0;
}
int main()
{
  int i = 42;
  reset(&i);
  cout << "i = " << i << endl;
  return 0;
}
