#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int main()
{
  vector<string> vec;
  string value;
  string val = "a";
  cout << "please enter string (quit to cancel):" << endl;
  while (cin >> value && value != "quit") {
    vec.push_back(value);
  }
  auto result = count(vec.begin(), vec.end(), val);
  cout << val << " is count equal " << result << endl;
  return 0;
}
