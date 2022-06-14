//
// Created by JIESOUL on 2019/10/17.
//
#include "algostuff.h"
using namespace std;

int main()
{
  vector<int> coll;
  int num;
  INSERT_ELEMENTS(coll,1,9);
  PRINT_ELEMENTS(coll, "coll: ");
  
  num = count(coll.cbegin(), coll.cend(), 4);
  cout << "number of elements equal to 4:    " << num << endl;
  num = count_if(coll.cbegin(), coll.cend(),
      [](int elem) {
    return elem%2==0;
  });
  cout << "number of elements with even value: " << num << endl;
  
  num = count_if(coll.cbegin(), coll.cend(),
      [] (int elem) {
    return elem > 4;
  });
  cout << "number of elements greater than 4: " << num << endl;
}
