//
// Created by JIESOUL on 2019/9/25.
//

#include "PrettyMenu.h"
void PrettyMenu::changeBackground(std::istream &imgSrc)
{
  using std::swap;
  Lock ml(&mutex);
  std::tr1::shared_ptr<PMImpl> pNew(new PMImpl(*pImpl));
  ++pNew->imageChanges;
  swap(pImpl, pNew);
}
