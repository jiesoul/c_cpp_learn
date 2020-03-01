//
// Created by JIESOUL on 2019/9/25.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_TEXTBLOCK_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_TEXTBLOCK_H
#include <string>
#include <iostream>
using namespace std;
class TextBlock {
public:
  const char& operator[](std::size_t position) const 
  { return text[position]; }
  char& operator[](std::size_t position)
  { return text[position]; }
private:
  std::string text;
};

#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_TEXTBLOCK_H
