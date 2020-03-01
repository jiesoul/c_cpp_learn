#include <iostream>
#include <string>

class Sales_data {
  friend Sales_data add(const Sales_data&, const Sales_data&);
  friend std::istream &read(std::istream&, Sales_data&);
  friend std::ostream &print(std::ostream&, const Sales_data&);

 public:
  Sales_data() = default;
  Sales_data(const std::string &s, unsigned n, double p):
    bookNo(s), units_sold(n), revenue(p*n) { }
  explicit Sales_data(std::string s = ""): bookNo(s) { }
  explicit Sales_data(std::istream &);

  std::string isbn() const { return this->bookNo; }
  Sales_data& combine(const Sales_data&);
 private:
  double avg_price() const;

  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};


