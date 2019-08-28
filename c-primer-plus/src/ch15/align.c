#include <stdio.h>
int main (void) {
  double dx;
  double ca;
  double cx;
  double dz;
  double db;
  char _Alignas(double) cz;
  printf("char alignment: %zd\n", _Alignof(char));
  printf("double alignment: %zd\n", _Alignof(double));
  printf("&dx: %p\n", &dx);
  printf("&ca: %p\n", &ca);
  printf("&cx: %p\n", &cx);
  printf("&dz: %p\n", &dz);
  printf("&cz: %p\n", &cz);
  printf("&cb: %p\n", &cb);
}
