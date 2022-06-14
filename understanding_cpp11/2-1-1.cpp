//
// Created by JIESOUL on 2019/9/27.
//
#include <iostream>
using namespace std;
int main()
{
  cout << "Standard Clib: " << __STDC_HOSTED__ << endl; // Standard Clib: 1
  cout << "Standard C: " << __STDC__ << endl; // Standard C: 1
// cout << "C Stardard version: " << __STDC_VERSION__ << endl;
  cout << "ISO/IEC " << __STDC_ISO_10646__ << endl;
  return 0;
}
