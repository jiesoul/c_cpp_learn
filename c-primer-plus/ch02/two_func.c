#include <stdio.h>

int butler(void)
{
  return 1;
}
int main(void)
{
  printf("I will summon the butler function.\n");
  butler();
  printf("Yes. Bring me some tea and writeable DVDs.\n");
  return 0;
}

