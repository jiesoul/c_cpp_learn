#include <iostream>
#include <string>
#include "Account.hpp"
void Account::rate(double newRate)
{
  interestRate = newRate;
}
double Account::initRate() {
  return interestRate;
}
double Account::interestRate = initRate();

int main()
{
  double r;
  r = Account::rate();
  std::cout << r << std::endl;
  Account ac1;
  Account *ac2 = &ac1;
  r = ac1.rate();
  r = ac2->rate();
  std::cout << r << std::endl;
  std::cout << "------end--------" << std::endl;

  return 0;
}
