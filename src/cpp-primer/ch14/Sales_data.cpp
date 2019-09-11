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

ostream& Sales_data::operator<<(ostream &os, const Sales_data &item)
{
  os << item.isbn() << " " << item.units_sold << " "
     << item.revenue << " " << item.avg_price();
  return os;
}
istream& Sales_data::operator>>(istream &is, Sales_data &item)
{
  double price;
  is >> item.bookNo >> item.units_sold >> price;
  if (is)
    item.revenue = item.units_sold * price;
  else
    item = Sales_data();
  return is;
}
bool Sales_data::operator==(const Sales_data &lhs, const Sales_data &rhs)
{
  return lhs.isbn() == rhs.isbn()
         && lhs.units_sold == rhs.units_sold
         && lhs.revenue = rhs.revenue;
}
bool bool Sales_data::operator!=(const Sales_data &lhs, const Sales_data &rhs)
{
  return !(lhs == rhs);
}
Sales_data& SalesData::operator+=(const Sales_data &rhs)
{
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}
