//
// Created by JIESOUL on 2019/9/4.
//
#include <iostream>
#include "../ch02/Sales_item.cc"
using std::cin;
using std::cout;
using std::endl;
using std::cerr;
int main()
{
  Sales_item item1, item2;
  cin >> item1 >> item2;
  if (item1.isbn() == item2.isbn()) {
    cout << item1 + item2 << endl;
    return 0;
  } else {
    cerr << "Data must refer to same ISBN" << endl;
    return -1;
  }
}
