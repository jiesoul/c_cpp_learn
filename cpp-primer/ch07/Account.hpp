#include <iostream>
#include <string>
class Account {
public:
  void calculate() { amount + amount * interestRate; }
  static double rate() { return interestRate; }
  static void rate(double);

private:
  static double interestRate;
  std::string owner;
  double amount;
  static double initRate();
  static constexpr int period = 30;
  double daily_tbl[period];
};
