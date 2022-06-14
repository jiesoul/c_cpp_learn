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
  for (auto &c : s) {
    c = 'X';
  }
  cout << s << endl;
  return 0;
}
