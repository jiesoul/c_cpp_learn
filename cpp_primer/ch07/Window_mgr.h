//
// Created by JIESOUL on 2019/9/4.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH07_WINDOW_MGR_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH07_WINDOW_MGR_H
#include "Screen.h"
#include <vector>
#include <string>
using std::vector;
using std::string;
class Window_mgr {
public:
  using ScreenIndex = std::vector<Screen>::size_type;
  void clear(ScreenIndex);
  ScreenIndex addScreen(const Screen);
private:
  std::vector<Screen> screens{Screen(20, 80, ' ')};
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH07_WINDOW_MGR_H
