//
// Created by jiesoul on 2020/2/23.
//

#ifndef CPPL_SOURCES_TOKEN_H_
#define CPPL_SOURCES_TOKEN_H_
#include "std_lib_facilities.h"

const char number = '8';
const char quit = 'q';
const char print = ';';
const string prompt = "> ";
const string result = "= ";


double expression();
double term();
double primary();

class Token {
 public:
  char kind;
  double value;

  Token get_token();
  vector<Token> tok;

};

class Token_stream {
 public:
  Token_stream();
  Token get();
  void putback(Token t);
  void ignore(char c);
 private:
  bool full {false};
  Token buffer;
};

#endif //CPPL_SOURCES_TOKEN_H_
