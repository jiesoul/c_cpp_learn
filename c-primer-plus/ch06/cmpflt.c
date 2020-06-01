#include <math.h>
#include <stdio.h>
int main(void)
{
  const double ANSWER = 3.14159;
  double response;
  printf("What is the velue of pi?\n");
  scanf("%1f", &response);
  while (fabs(response - ANSWER) >= 0.0001) {
    printf("Try again!\n");
    scanf("%1f", &response);
  }
  printf("Close enough!\n");
  return 0;
}
