//
// Created by JIESOUL on 2019/10/11.
//
#include <vector>
#include <iostream>
using namespace std;
int main()
{
  vector<int> coll;
  for(int i = 1; i <= 6; ++i) {
    coll.push_back(i);
  }
  for (int i = 0; i < coll.size(); ++i) {
    cout << coll[i] << ' ';
  }
  cout << endl;
}
