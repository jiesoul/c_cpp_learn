#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
  int d = 0.0;
  void *p = &d;
  double *dp = static_cast<double*>(p);

  const char *pc;
  char *p1 = const_cast<char*>(pc);
  cout << p1 << endl;

  return 0;
}
