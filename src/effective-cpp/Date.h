//
// Created by JIESOUL on 2019/9/26.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_DATE_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_DATE_H
struct Day {
  explicit Day(int d): val(d) { }
  int val;
};
struct Month {
  explicit Month(int m): val(m) { }
  int val;
};
struct Year {
  explicit Year(int y): val(y) { }
  int val;
};
class Date {
public:
  Date(const Month& m, const Day& d, const Year& y);
};

#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_DATE_H
