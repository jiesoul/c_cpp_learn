#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::string;
class Screen {
  friend class Window_mgr;
  // friend void Window_mgr::clear(ScreenIndex);
public:
  typedef std::string::size_type pos;
  Screen() = default;
  Screen(pos ht, pos wd, char c): height(ht), width(wd),
                                  contents(ht * wd, c) { }
  Screen &set(char);
  Screen &set(pos, pos, char);
  char get() const
  { return contents[cursor]; }
  inline char get(pos ht, pos wd) const;
  Screen &move(pos r, pos c);
  void some_momber() const;
  Screen &display(std::ostream &os) { do_display(os); return *this; }
  const Screen &display(std::ostream &os) const { do_display(os); return *this; }
private:
  pos cursor = 0;
  pos height = 0, width = 0;
  std::string contents;
  mutable size_t access_ctr;
  void do_display(std::ostream &os) const { os << contents; }
};
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
void Screen::some_momber() const
{
  ++access_ctr;
}
inline
Screen &Screen::move(pos r, pos c)
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
class Window_mgr {
public:
  using ScreenIndex = std::vector<Screen>::size_type;
  void clear(ScreenIndex);
private:
  std::vector<Screen> screens{Screen(24, 80, ' ')  };
};
void Window_mgr::clear(ScreenIndex i)
{
  Screen &s = screens[i];
  s.contents = string(s.height * s.width, ' ');
}

int main()
{
  Screen myScreen(5, 5, 'X');
  myScreen.move(4, 0).set('#').display(cout);
  cout << "\n";
  myScreen.display(cout);
  cout << "\n";
  return 0;
}
