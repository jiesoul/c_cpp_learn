#include <stdio.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
void startbar(void);
int main (void) {
  startbar();
  printf("%s\n", NAME);
  printf("%s\n", ADDRESS);
  printf("%s\n", PLACE);
  startbar();
  return 0;
}
void startbar(void) {
  int count;
  for (count = 1; count <= WIDTH; count++) {
    putchar('*');
  }
  putchar('\n');
}
