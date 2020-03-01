//
// Created by JIESOUL on 2019/10/11.
//
#include <ratio>
#include <iostream>
using namespace std;
int main()
{
  typedef ratio<5,3> FiveThirds;
  cout << FiveThirds::num << "/" << FiveThirds::den << endl;

  typedef ratio<25,15> AlsoFiveThirds;
  cout << AlsoFiveThirds::num << "/" << AlsoFiveThirds::den << endl;


}
