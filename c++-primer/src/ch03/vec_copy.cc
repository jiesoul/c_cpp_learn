#include <iostream>
#include <vector>
using std::vector;
int main()
{
  vector<int> ivec;
  vector<int> ivec2(ivec);
  vector<int> ivec3 = ivec;
  vector<string> svec(ivec2);

  return 0;
}
