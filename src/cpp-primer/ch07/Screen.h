#include <iostream>
#include <string>
#include <vector>

// extern std::ostream& storeOn(std::ostream &, Screen &);
// extern BitMap& storeOn(BitMap &, Screen &);

class Screen {
  friend class Window_mgr;
  friend void Window_mgr::clear(ScreenIndex);
  friend std::ostream& storeOn(std::ostream &, Screen &);
 public:
  typedef std::string::size_type pos;
  Screen() = default;
  Screen(pos ht, pos wd, char c): height(ht), width(wd),
                                  contents(ht * wd, c) { }
  char get() const { return contents[cursor]; }
  inline char get(pos ht, pos wd) const;
  Screen &move(pos r, pos c);
  void some_member() const;
  Screen &set(char);
  Screen &set(pos, pos, char);
  Screen &display(std::ostream &os)
    { do_display(os); return *this; }
  const Screen &display(std::ostream &os) const
  { do_display(os); return *this; }

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
inline Screen &screen::set(pos r, pos, col, char ch)
{
  contents[r*width + col] = ch;
  return *this;
}

void Screen::some_member() const
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
  ScreenIndex addScreen(const Screen&);
 private:
  std::vector<Screen> screens{Screen(20, 80, ' ')};
};
void Window_mgr::clear(ScreenIndex i)
{
  Screen &s = screens[i];
  s.contents = string(s.height * s.width, ' ');
}
Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen &s)
{
  screens.push_back(s);
  return screens.size() - 1;
}
