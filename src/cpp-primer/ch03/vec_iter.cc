#include <iostream>
#include <string>
using std::cin;
using std::string;

int main()
{
  string s("some string");
  if (s.begin() != s.end()) {
    auto it = s.begin();
    *it = toupper(*it);
  }
  return 0;
}
