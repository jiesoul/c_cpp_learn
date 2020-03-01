#include "Screen.h"
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::string;
inline Screen &Screen::set(char c)
{
  contents[cursor] = c;
  return *this;
}
inline Screen &Screen::set(pos r, pos col, char ch)
{
  contents[r * width + col] = ch;
  return *this;
}
void Screen::some_member() const
{
  ++access_ctr;
}
inline Screen &Screen::move(pos r, pos c)
{
  pos row = r * width;
  cursor = row + c;
  return *this;
}
char Screen::get(pos r, pos c) const
{
  pos row = r * width;
  return contents[row + c];
}
int main()
{
//  Screen myScreen(5, 3);
//  const Screen blank(5, 3);
//  myScreen.set('#').display(cout);
//  blank.display(cout);

  Screen myScreen(5, 5, 'X');
  myScreen.move(4,0).set('#').display(cout);
  cout << "\n";
  myScreen.display(cout);
  cout << "\n";
  return 0;
}
