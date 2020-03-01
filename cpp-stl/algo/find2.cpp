//
// Created by JIESOUL on 2019/10/17.
//
#include "algostuff.h"
using namespace std;
using namespace std::placeholders;

int main()
{
  vector<int> coll;
  INSERT_ELEMENTS(coll,1,9);
  PRINT_ELEMENTS(coll, "coll: ");

  vector<int>::iterator pos;
  pos = find_if(coll.begin(), coll.end(),
                bind(greater<int>(),_1,3));
  cout << "the " << distance(coll.begin(),pos) + 1 << ". element is first greater than 3 " << endl;

  pos = find_if(coll.begin(), coll.end(),
      [] (int elem) {
    return elem%3==0;
  });
  cout << "the " << distance(coll.begin(),pos) + 1 << ". element is first divisible by 3 " << endl;

  pos = find_if_not(coll.begin(), coll.end(), bind(less<int>(),_1,5));
  cout << "the " << distance(coll.begin(),pos) + 1 << ". element is first divisible by 3 " << endl;
}
