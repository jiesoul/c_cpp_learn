//
// Created by JIESOUL on 2019/9/16.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH15_BASKET_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH15_BASKET_H
#include "Quote.h"
class Basket {
public:
  void add_item(const std::shared_ptr<Quote> &sale) { items.insert(sale); }
  void add_item(const Quote& sale) { items.insert(std::shared_ptr<Quote>(sale.clone())); }
  void add_item(Quote&& sale) { items.insert(std::shared_ptr<Quote>(std::move(sale).clone())); }
  double total_receipt(std::ostream&) const;
private:
  static bool compare(const std::shared_ptr<Quote> &lhs,
                      const std::shared_ptr<Quote> &rhs)
  { return lhs->isbn() < rhs->isbn(); }
  std::multiset<std::shared_ptr<Quote>, decltype(compare)*> items{compare};
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH15_BASKET_H
