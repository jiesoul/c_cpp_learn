//
// Created by JIESOUL on 2019/9/6.
//
#include "Sales_data.h"
#include <iostream>
#include <string>
#include <vector>
using std::string;
double Sales_data::avg_price() const {
  if (units_sold)
    return revenue/units_sold;
  else
    return 0;
}
Sales_data& Sales_data::combine(const Sales_data &rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
  Sales_data sum = lhs;
  sum.combine(rhs);
  return sum;
}
std::ostream &print(std::ostream &os, const Sales_data &item) {
  os << item.isbn() << " " << item.units_sold << " "
     << item.revenue << " " << item.avg_price();
  return os;
}
std::istream &read(std::istream &is, Sales_data &item) {
  double price = 0;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = price * item.units_sold;
  return is;
}

int main()
{
  Sales_data item;
  String null_book = "9-999-99999-9";
  item.combine(Sales_data(null_book));

  return 0;
}
ostream &operator<<(ostream &os, const Sales_data &item)
{
  os << item.isbn() << " " << item.units_sold << " "
     << item.revenue << " " << item.avg_price();
  return os;
}
istream &operator>>(istream &is, Sales_data &item)
{
  double price;
  is >> item.bookNo >> item.units_sold >> price;
  if (is)
    item.revenue = item.units_sold * price;
  else
    item = Sales_data();
  return is;
}
Sales_data operator+(constexpr Sales_data &lhs, const Sales_data &rhs)
{
  Sales_data sum = lhs;
  sum += rhs;
  return sum;
}
bool Sales_data::