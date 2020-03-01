//
// Created by JIESOUL on 2019/9/5.
//
#include "Screen.h"
#include <iostream>
using std::cout;
using std::endl;
int main()
{
  Screen myScreen(4, 5, 'X');
  myScreen.move(4, 0).set('#').display(cout);
  cout << "\n";
  myScreen.display(cout);
  cout << "\n";
  return -1;
}
