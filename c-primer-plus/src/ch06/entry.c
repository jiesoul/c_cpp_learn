#include <stdio.h>
int main(void)
{
  const int secret_code = 13;
  int code_entered;
  printf("To enter the triskadekaphobia therapy club");
  printf("please enter the secret coce number: ");
  scanf("%d", &secret_code);
  while (code_entered != secret_code) {
    printf("To enter the triskaidekaphobia therapy club., \n");
    printf("please enter the secret code number: ");
    scanf("%d", &code_entered);
  }
  printf("Congratulations! Your are cured!\n");
  return 0;
}
