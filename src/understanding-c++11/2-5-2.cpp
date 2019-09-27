//
// Created by JIESOUL on 2019/9/27.
//
#include <cassert>
using namespace std;
enum FeatureSupports {
  C99     = 0x0001,
  ExtInt  = 0x0002,
  SAssert = 0x0004,
  NoExcept = 0x0008,
  SMAX    = 0x0010,
};
struct Compiler {
  const char* name;
  int spp;
};
int main()
{
  assert((SMAX - 1) == (C99 | ExtInt | SAssert | NoExcept));
  Compiler a = {"abc", (C99 | SAssert)};
  if (a.spp & C99) {
    
  }
  return 0;
}
