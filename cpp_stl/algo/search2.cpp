//
// Created by JIESOUL on 2019/10/17.
//
#include "algostuff.h"
using namespace std;
bool checkEven (int elem, bool even)
{
  if (even) {
    return elem % 2 == 0;
  } else {
    return elem % 2 == 1;
  }
}

int main()
{
  vector<int> coll;
  INSERT_ELEMENTS(coll,1,9);
  PRINT_ELEMENTS(coll, "coll: ");
  bool checkEvenArgs[3] = {true, false, true};
  vector<int>::iterator pos;
  pos = search(coll.begin(), coll.end(),
      checkEvenArgs, checkEvenArgs+3,
      checkEven);
  while (pos != coll.end()) {
    cout << "subrange found starting with elment " << distance(coll.begin(),pos)+1 << endl;
    pos = search(++pos, coll.end(),
        checkEvenArgs, checkEvenArgs+3,
        checkEven);
  }
}

