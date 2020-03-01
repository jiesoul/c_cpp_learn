//
// Created by JIESOUL on 2019/9/12.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH15_BULK_QUOTE_1_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH15_BULK_QUOTE_1_H
#include "Quote.h"
class Bulk_quote_1 : public Quote {
public:
  Bulk_quote_1() = default;
  Bulk_quote_1(const std::string &book, double p, std::size_t qty, std::size_t max_qty, double disc):
    Quote(book, p), max_qty(max_qty), discount(disc) { }
  double net_price(std::size_t) const override;
private:
//  std::size_t min_qty = 0.0;
  std::size_t max_qty = 5;
  double discount = 0.0;
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH15_BULK_QUOTE_1_H
