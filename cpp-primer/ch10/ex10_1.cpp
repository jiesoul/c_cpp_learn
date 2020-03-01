#include <iostream>
#include <algorithm>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
  vector<int> vec;
  int value;
  int val = 40;
  while (cin >> value) {
    vec.push_back(value);
  }
  auto result = count(vec.begin(), vec.end(), val);
  cout << val << " is count equal " << result << endl;
  return 0;
}
