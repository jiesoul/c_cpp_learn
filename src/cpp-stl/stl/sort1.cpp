//
// Created by JIESOUL on 2019/10/15.
//
#include <algorithm>
#include <deque>
#include <string>
#include <iostream>
using namespace std;

class Person {
 public:
  string firstname() const;
  string lastname() const;
};

bool personSortCriterion(const Person& p1, const Person& p2)
{
  return p1.lastname()<p2.lastname() ||
      (p1.lastname() == p2.lastname() && p1.firstname() < p2.firstname());
}

int main()
{
  deque<Person> coll;

  sort(coll.begin(), coll.end(), personSortCriterion);
}
