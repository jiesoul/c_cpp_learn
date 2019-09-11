//
// Created by jiesoul on 2019/9/11.
//
#include "Bulk_quote.h"
#include <iostream>
using std::endl;
double Bulk_quote::net_price(std::size_t cnt) const
{
  if (cnt >= min_qty)
    return cnt * (1 - discount) * price;
  else
    return cnt * price;
}

double print_total(ostream &os, const Quote &item, size_t n)
{
  double ret = item.isbn();
  os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << endl;
  return ret;
}