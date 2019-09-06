//
// Created by JIESOUL on 2019/9/6.
//
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
int main()
{
  vector<int> ivec;
  cout << " ivec: size: " << ivec.size()
       << " capacity: " << ivec.capacity() << endl;

  for (vector<int>::size_type ix = 0; ix != 24 ; ++ix) {
    ivec.push_back(ix);
  }

  cout << "ivec: size: " << ivec.size()
  << " capacity: " << ivec.capacity() << endl;

  return 0;
}
