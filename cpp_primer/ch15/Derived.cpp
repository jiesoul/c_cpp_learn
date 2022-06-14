//
// Created by jiesoul on 2019/9/11.
//

#include "Derived.h"
void Derived::f(const Derived &derived_obj)
{
  Base::statmem();
  Derived::statmem();
  derived_obj.statmem();
  statmem();
}