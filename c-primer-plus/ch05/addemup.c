#include <stdio.h>
int main(void)
{
  int count, num;
  count = 0;
  num = 0;
  while (count++ < 20) {
    num = num + count;
  }

  printf("sum=%d\n", num);
  return 0;
}
