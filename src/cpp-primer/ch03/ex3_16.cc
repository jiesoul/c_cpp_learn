#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
int main()
{
  vector<int> v(10);
  auto len = v.size();
  for (int ix = 0; ix < len; ix++) {
    cout << v[ix] << endl;
  }
  cout << len << endl;
  return 0;
}
