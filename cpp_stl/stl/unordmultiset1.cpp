//
// Created by JIESOUL on 2019/10/11.
//
#include <unordered_set>
#include <string>
#include <iostream>
using namespace std;
int main()
{
  unordered_multiset<string> cities {
    "Beijing", "Tianjin", "Chengdu", "Shanghai", "Chongqing"
  };
  for (const auto& elem : cities) {
    cout << elem << "  ";
  }
  cout << endl;

  cities.insert({"Xian", "Haerbing", "Guangzhou"});
  for (const auto& elem : cities) {
    cout << elem << " ";
  }
  cout << endl;
}
