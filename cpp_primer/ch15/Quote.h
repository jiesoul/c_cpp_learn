//
// Created by jiesoul on 2019/9/11.
//

#ifndef C_CPP_LEARN_QUOTE_H
#define C_CPP_LEARN_QUOTE_H
#include <string>

class Quote {
public:
  Quote() = default;
  Quote(const Quote&) = default;
  Quote(Quote&&) = default;
  Quote(const std::string &book, double sales_price): bookNo(book), price(sales_price) { }
  std::string isbn() const;
  virtual double net_price(std::size_t n) const;
  virtual void debug();
  Quote &operator=(const Quote&) = default;
  Quote &operator-(Quote&&) = default;
  virtual Quote* clone() const & { return new Quote(*this); }
  virtual Quote* clone() && { return new Quote(std::move(*this)); }
  virtual ~Quote() = default;
private:
  std::string bookNo;
protected:
  double price = 0.0;
};


#endif //C_CPP_LEARN_QUOTE_H
