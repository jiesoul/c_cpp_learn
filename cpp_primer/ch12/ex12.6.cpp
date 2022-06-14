//
// Created by JIESOUL on 2019/9/23.
//
#include <iostream>
#include <vector>
using namespace std;
vector<int>* init()
{
  return new vector<int>();
}
void in(vector<int>* vec)
{
  int p;
  while (cin >> p) {
    vec->push_back(p);
  }
}
void print(vector<int>* vec)
{
  for (auto i = vec->begin(); i != vec->end(); i++) {
    cout << *i << " ";
  }
}

int main()
{
  vector<int>* vec = init();
  in(vec);
  print(vec);
  delete vec;
  return 0;
}

