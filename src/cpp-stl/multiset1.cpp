//
// Created by JIESOUL on 2019/10/11.
//
#include <set>
#include <string>
#include <iostream>
using namespace std;

int main()
{
  multiset<string> cities {"BeiJing", "TianJin", "ShangHai", "ChongQing", "XiAn"};
  for (const auto& elem : cities) {
    cout << elem << " ";
  }
  cout << endl;

  cities.insert({"HaErBing", "GuangZhou"});
  for (const auto& elem : cities) {
    cout << elem << " ";
  }
  cout << endl;
}
