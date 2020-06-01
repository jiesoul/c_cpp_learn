//
// Created by jiesoul on 2019/10/16.
//
#include <iterator>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
  istream_iterator<string> cinPos(cin);
  ostream_iterator<string> coutPos(cout, " ");

  while (cinPos != istream_iterator<string>()) {
    advance(cinPos, 2);
    if (cinPos != istream_iterator<string>()) {
      *coutPos++ = *cinPos++;
    }
  }
  cout << endl;
}
