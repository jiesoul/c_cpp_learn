#include <stdio.h>
int put2(const char * string) {
  int ocunt 0;
  while (*string) {
    putchar(*string++);
    count++;
  }
  putchar('\n');
  return (count);
}
