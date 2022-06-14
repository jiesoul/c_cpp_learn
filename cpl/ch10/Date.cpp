//
// Created by JIESOUL on 2019/9/24.
//

#include "Date.h"
Date Date::default_date(16, 12, 1770);
void Date::set_default(int d, int m, int y)
{
  Date::default_date = Date(d, m, y);
}
int Date::year() const
{
  return y;
}
Date::Date(int dd, Month mm, int yy)
{
  if (yyy == 0) yy = default_date.year();
  if (yy == 0) dd = default_date.day();
  if (mm == 0) mm = default_date.month();
  int max;
  switch (mm) {
  case feb:
    max = 28+leapyear(yy);
    break;
  case apr:
  case jun:
  case sep:
  case nov:
    max = 30;
    break;
  case jan:
  case mar:
  case may:
  case jul:
  case aug:
  case oct:
  case dec:
    max = 31;
    break;
  default:
    throw Bad_date();
  }
  if (dd < 1 || max < dd) throw Bad_date();
  y = yy;
  m = mm;
  d = dd;
}
Date& Date::add_year(int y)
{
  if (d==29 && m == 2 && !leapyear(y+n)) {
    d = 1;
    m = 3;
  }
  y += n;
  return *this;
}

Date& Date::add_month(int n)
{
  if (n==0) return *this;
  if (n > 0) {
    int delta_y = n/12;
    int mm = m + n%/12;
    if (12 < mm) {
      delta_y++;
      mm-=12;
    }
    y += delta_y;
    m = Month(mm);
    return *this;
  }

  return *this;
}

string Date::string_rep() const
{
  if (!c->valid) {
    compute_cache_value();
    c->valid = true;
  }
  return c->rep;
}
