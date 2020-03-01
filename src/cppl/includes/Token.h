//
// Created by jiesoul on 2020/2/23.
//

#ifndef CPPL_SOURCES_TOKEN_H_
#define CPPL_SOURCES_TOKEN_H_
#include "std_lib_facilities.h"

class Token {
 public:
  char kind;
  double value;

  Token get_token();
  vector<Token> tok;
  double expression();
  double term();
  double primary();
};

#endif //CPPL_SOURCES_TOKEN_H_
