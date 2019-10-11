//
// Created by JIESOUL on 2019/10/11.
//
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int main()
{
  vector<int> coll;
  coll.push_back(2);
  coll.push_back(5);
  coll.push_back(4);
  coll.push_back(1);
  coll.push_back(6);
  coll.push_back(3);

  vector<int>::const_iterator  minpos = min_element(coll.cbegin(), coll.cend());
  cout << "min: " << *minpos << endl;
  vector<int>::const_iterator maxpos = max_element(coll.begin(), coll.end());
  cout << "max: " << *maxpos << endl;

  sort(coll.begin(), coll.end());

  vector<int>::iterator  pos3;
  pos3 = find(coll.begin(), coll.end(), 3);

  vector<int>::const_iterator  pos;
  for (pos = coll.begin(); pos != coll.end(); ++pos) {
    cout << *pos << ' ';
  }
  cout << endl;
}
