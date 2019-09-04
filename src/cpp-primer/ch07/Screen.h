//
// Created by JIESOUL on 2019/9/4.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH07_SCREEN_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH07_SCREEN_H
#include <string>
class Screen {
public:
  typedef std::string::size_type pos;
  Screen() = default;
  Screen(pos ht, pos wd, char c): height(ht), width(wd),
  content(ht * wd, c) { }
  char get() const
  { return contents[cursor]; }
  inline  char get(pos ht, pos wd) const;
  Screen &move(pos r, pos c);
  Screen &set(char);
  Screen &set(pos, pos, char);
  Screen &display(std::ostream &os) { do_dispaly(os); return *this; }
  const Screen &display(std::ostream &os) const
  { do_display(os); return *this; }
private:
  pos cursor = 0;
  pos height = 0, width = 0;
  std::string contents;
  mutable size_t access_ctr;
};
#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH07_SCREEN_H
