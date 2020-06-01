#include <stdio.h>
int main(void)
{
  char ch;
  int i;
  float fl;
  fl = i = ch = 'C';
  printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
  ch = ch + 1;
  fl = 2.0 * ch + 1;
  printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
  ch = 1107;
  printf("Now ch = %c\n", ch);
  ch = 80.89;
  printf("Now ch = %c\n", ch);
  return 0;
}
