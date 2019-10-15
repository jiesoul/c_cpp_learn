//
// Created by JIESOUL on 2019/10/11.
//

#ifndef C_CPP_LEARN_SRC_CPP_STL_CLOCK_H_
#define C_CPP_LEARN_SRC_CPP_STL_CLOCK_H_
#include <chrono>
#include <iostream>
#include <iomanip>

template <typename C>
void printClockData()
{
  using namespace std;
  cout << "- precision: ";

  typedef typename C::period P;
  if (ratio_less_equal<P,milli>::value) {
    typedef typename ratio_multiply<P,kilo>::type TT;
    cout << fixed << double(TT::num)/TT::den << " milliseconds" << endl;
  } else {
    cout << fixed << double(P::num)/P::den << " seconds" << endl;
  }
  cout << "- is_steady: " << boolalpha << C::is_steady << endl;
}
#endif //C_CPP_LEARN_SRC_CPP_STL_CLOCK_H_
