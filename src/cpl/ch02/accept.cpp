//
// Created by JIESOUL on 2019/9/24.
//
#include <iostream>
using namespace std;
bool accept()
{
  cout << "Do you want to proceed (y or n)?\n";
  char answer = 0;
  cin >> answer;
  if (answer == 'y')
    return true;
  return false;
}

bool accept2()
{
  cout << "Do you want to proceed (y or n)?\n";
  char answer = 0;
  cin >> answer;
  switch (answer) {
  case 'y':return ture;
  case 'n': return false;
  default:
    cout << "I'll take that for a no.\n";
    return false;
  }
}

bool accept3()
{
  int tries = 1;
  while (tries < 4) {
    cout << "Do you want to proceed (y or n)?\n";
    char answer = 0;
    cin >> answer;
    switch (answer) {
    case 'y': return true;
    case 'n': return false;
    default:
      cout << "Sorry, I don't understand that.\n";
      tries = tries+1;
    }
  }
  cout << "I'll take the for a no.\n";
  return false;

}
