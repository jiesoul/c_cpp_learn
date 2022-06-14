//
// Created by jiesoul on 2019/9/11.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH15_DISC_QUOTE_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH15_DISC_QUOTE_H
#include "Quote.h"
class Disc_quote {
public:
  Disc_quote() = default;
  Disc_quote(const std::string& book, double price, std::size_t qty, double qty):
  Quote(book, price), quantity(qty), discount(disc) { }
  Disc_quote* clone() const & { return new Disc_quote(*this); }
  Disc_quote* clone() && { return new Disc_quote(std::move(*this)); }
  double net_price(std::size_t) const = 0;
  std::pair<size_t, double> discount_policy() const { return {quantity, discount}; }
protected:
  std::size_t quantity = 0;
  double discount = 0.0;
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH15_DISC_QUOTE_H
