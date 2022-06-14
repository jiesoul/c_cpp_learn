//
// Created by jiesoul on 2019/10/15.
//
#include <iostream>
#include <set>
using namespace std;
int main()
{
  set<int> c;

  c.insert(1);
  c.insert(2);
  c.insert(3);
  c.insert(4);
  c.insert(5);
  c.insert(6);

  cout << "lower_bound(3): " << *c.lower_bound(3) << endl;
  cout << "upper_bound(3): " << *c.upper_bound(3) << endl;
  cout << "equal_range(3): " << *c.equal_range(3).first << " "
    << *c.equal_range(3).second << endl;
  cout << endl;
  cout << "lower_bound(5): " << *c.lower_bound(5) << endl;
}
