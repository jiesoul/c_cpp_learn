#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::string;
using std::vector;
using std::endl;
int main()
{
  vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (auto &i : v)
    i *= i;
  for (auto i : v)
    cout << i << " ";
  cout << endl;
  return 0;
}
