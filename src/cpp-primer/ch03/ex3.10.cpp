//
// Created by JIESOUL on 2019/9/17.
//
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
  string s;
  cin >> s;
  string result;
  for (auto &c : s) {
    if (!ispunct(c))
      result += c;
  }
  cout << result << endl;
  return 0;
}
