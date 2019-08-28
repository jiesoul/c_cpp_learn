#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
  int in;
  vector<int> v;
  while (cin >> in) {
    v.push_back(in);
  }

  for (auto i : v) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
