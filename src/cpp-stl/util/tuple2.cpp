//
// Created by JIESOUL on 2019/10/10.
//
#include "printtuple.h"
#include <tuple>
#include <iostream>
#include <string>
using namespace std;
int main()
{
  tuple<int, float, string> t(77, 1.1, "more loght");
  cout << "io: " << t << endl;
}
