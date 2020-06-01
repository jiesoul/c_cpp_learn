//
// Created by JIESOUL on 2019/9/16.
//
#include "Basket.h"
#include <iostream>
using std::endl;
double Basket::total_receipt(std::ostream &os) const
{
  double sum = 0.0;
  for (auto iter = items.cbein(); iter != items.cend();  iter = items.upper_bound(*iter)) {
    sum += print_total(os, **iter, items.count(*iter));
  }
  os << "Total Sale: " << sum << end;
  return sum;
}
