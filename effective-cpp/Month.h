//
// Created by JIESOUL on 2019/9/26.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_MONTH_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_MONTH_H

class Month {
public:
  static Month Jan() { return Month(1); }
  static Month Feb() { return Month(2); }
  static Month Mar() { return Month(3); }
  static Month Apr() { return Month(4); }
  static Month May() { return Month(5); }
  static Month Jun() { return Month(6); }
  static Month Juy() { return Month(7); }
  static Month Aug() { return Month(8); }
  static Month Sep() { return Month(9); }
  static Month Oct() { return Month(10); }
  static Month Nov() { return Month(11); }
  static Month Dec() { return Month(12); }

private:
  explicit Month(int m);
};

#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_MONTH_H
