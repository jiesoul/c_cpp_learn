//
// Created by jiesoul on 2020/2/23.
//
#include "Token.h"
#include "Variable.h"

vector<Token> tok;
Token_stream ts;
vector<Variable> var_table;

double statement()
{
  Token t = ts.get();

}

void clean_up_mess()
{
  ts.ignore(print);
}

void calculate()
{
  while (cin) {
    try {
      cout << prompt;
      Token t = ts.get();
      while (t.kind == print) t = ts.get();
      if (t.kind == quit) return;
      ts.putback(t);
      cout << result << '\n';

    } catch (exception& e) {
      cerr << e.what() << '\n';
      clean_up_mess();
    }
  }
}

int main()
{
  cout << "Please enter expression (we can handle +, -, *, and /)\n";
  cout << "add an x to end expression (e.g., 1+2*3x):";

  double val = 0;
  try {
    calculate();
    keep_window_open("~~");
    return 0;

  }catch (exception& e) {
    cerr << e.what() << '\n';
    keep_window_open("~~");
  } catch (...) {
    cerr << "exception \n";
    keep_window_open("~~");
    return 2;
  }
}
