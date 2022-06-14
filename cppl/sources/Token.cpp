//
// Created by jiesoul on 2020/2/23.
//

#include "Token.h"

Token get_token()
{

}

double expression()
{
  double left = term();
  Token t = get_token();
  while (true) {
    switch (t.kind) {
      case '+':
        left += term();
        t = get_token();
        break;
      case '-':
        left -= term();
        t = get_token();
        break;
      default:
        return left;
    }
  }
}

double term() {
  double left = primary();
  Token t = get_token();
  while (true) {
    switch (t.kind) {
      case '*':
        left *= primary();
        t = get_token();
        break;
      case '/':
      {
        double d = primary();
        if (d == 0) cerr << "divide by zero";
        left /= primary();
        t = get_token();
        break;
      }
      case '%':
      {
        double d = primary();
        if (d == 0) cerr << "divide by zero";
        left = fmod(left,d);
        t = get_token();
        break;
      }
      default:
        return left;
    }
  }
}

double primary()
{
  Token t = get_token();
  switch (t.kind) {
    case '(':
    {
      double d = expression();
      t = get_token();
      if (t.kind != ')') cerr << "')' expected";
      return d;
    }
    case number:
      return t.value;
    case '-':
      return -primary();
    case '+':
      return primary();
    default:
      cerr << "primary expected";
  }
}

void Token_stream::putback(Token t)
{
  if (full) cerr << "putback() into a full buffer";
  buffer = t;
  full = true;
}

Token Token_stream::get()
{
  if (full) {
    full = false;
    return buffer;
  }

  char ch;
  cin >> ch;

  switch (ch) {
    case ';':
    case 'q':
    case '(':
    case ')':
    case '+':
    case '-':
    case '*':
    case '/':
      return Token{ch};
    case '.':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    {
      cin.putback(ch);
      double val;
      cin >> val;
      return Token{number, val};
    }
    default:
      cerr << "Bad token";
  }
}

void Token_stream::ignore(char c) {
  if (full && c == buffer.kind) {
    full = false;
    return;
  }
  full = false;

  char ch = 0;
  while (cin >> ch) {
    if (ch == c) return;
  }
}