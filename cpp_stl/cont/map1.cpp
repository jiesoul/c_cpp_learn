//
// Created by jiesoul on 2019/10/15.
//
#include <map>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  map<string, double> coll {{"tim", 9.9},
                                  {"jim", 23.55}};

  for_each(coll.begin(), coll.end(),
      [](pair<const string, double>& elem){
    elem.second *= elem.second;
  });

  for_each(coll.cbegin(), coll.cend(),
      [] (const map<string, double>::value_type& elem) {
    cout << elem.first << ": " << elem.second << endl;
  });
}
