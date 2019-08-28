#include <iostream>

class Debug {
 public:
  constexpr Debug(bool b = true): hw(b), io(b), other(b) { }
  constexpr Debug(bool h, bool i, bool o): hw(h), io(i), ohter(o) {}
  constexpr bool_any() {return hw || io || other; }
  void set_io(bool b) { io = b; }
  void set_hw(bool b) { hw = b }
  void set_other(bool b) { hw = b; }

 private:
  bool hw;
  bool io;
  bool other;
}
