//
// Created by JIESOUL on 2019/9/24.
//

#ifndef C_CPP_LEARN_SRC_CPL_CH10_DATE_H
#define C_CPP_LEARN_SRC_CPL_CH10_DATE_H
#include <string>
using namespace std;
struct cache {
  bool valid;
  string rep;
};
class Date {
  cache* c;
  void compute_cache_value();
  int d, m, y;
  static Date default_date;
public:
  enum Month(jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec);
  class Bad_date { };
  int day() const
  Monthmouth() const
  int year() const;

  Date(int dd = 0, Month mm = Month(0), int yy = 0);
//  Date(int, int);
//  Date(int);
//  Date();
  Date(const char*);

  Date& add_year(int y);
  Date& add_month(int n);
  Date& add_day(int d);
  static void set_default(int, int, int);
  string string_rep() const;
  void char_rep(char s[]) const;
};

#endif //C_CPP_LEARN_SRC_CPL_CH10_DATE_H
