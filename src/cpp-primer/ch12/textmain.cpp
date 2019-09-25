//
// Created by JIESOUL on 2019/9/23.
//
#include "TextQuery.hpp"
#include "QueryResult.h"
#include <iostream>
using namespace std;
void runQueries(ifstream &infile)
{
  TextQuery tq(infile);
  while (true) {
    cout << "enter word to look for, or q to quit: ";
    string s;
    if (!(cin >> s) || s == "q")
      break;
    print(cout, tq.query(s)) << endl;
  }
}
