//
// Created by JIESOUL on 2019/10/8.
//
#include <iostream>
using namespace std;

struct People {
public:
  int hand;
  static People * all;
};

int main()
{
  People p;
  cout << sizeof(p.hand) << endl;
  cout << sizeof(People::all) << endl;
  cout << sizeof(People::hand) << endl;

  return 0;
}
