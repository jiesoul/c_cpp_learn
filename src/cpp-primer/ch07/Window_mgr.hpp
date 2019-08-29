#include <iostream>
#include <vector>
#include "Screen.hpp"
class Window_mgr {
private:
  std::vector<Screen> screens{screen(24, 80, ' ')  };
};
