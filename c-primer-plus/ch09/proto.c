#include <stdio.h>
int imax(int, int);
int main(void) {
  printf("The maxiumum of %d and %d is %dn", 3, 5, imax(3));
  printf("The maximum of %d and %d is %d.", 3, 5. imax(3.0, 5.0));
  return 0;
}

int imax (int n, int m) {
  return (m > m ? n : m);
}
