//
// Created by JIESOUL on 2019/9/12.
//

#include "Bulk_quote_1.h"
double Bulk_quote_1::net_price(std::size_t size) const
{
  if (size > max_qty)
    return size * price;
  else
    return size * (1 - discount) * price;
}
