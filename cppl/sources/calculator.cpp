//
// Created by jiesoul on 2020/2/23.
//
#include "std_lib_facilities.h"

int main()
{
  cout << "Please enter expression (we can handle + and -):";
  int lval = 0;
  int rval;
  char op;
  int res;
  cin >> lval >> op >> rval;

  if (op == '+') {
    res = lval + rval;
  } else if (op == '-') {
    res = lval - rval;
  }

  cout << "Result: " << res << '\n';
  keep_window_open(nullptr);

  return 0;
}
