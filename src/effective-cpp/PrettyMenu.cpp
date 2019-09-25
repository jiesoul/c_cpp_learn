//
// Created by JIESOUL on 2019/9/25.
//

#include "PrettyMenu.h"
void PrettyMenu::changeBackground(std::istream &imgSrc)
{
  lock(&mutex);
  delete bgImage;
  ++imageChanges;
  bgImage = new Igage(imgSrc);
  unlock(&mutex);
}
