#include <iostream>
#include <vector>
#include "Screen.cpp"
class Window_mgr {
private:
  std::vector<Screen> screens{screen(24, 80, ' ')  };
};
