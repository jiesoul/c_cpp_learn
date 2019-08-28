#include <stdio.h>
int main(void)
{
  double debt;
  for (debt = 10.0; debt < 150.0; debt = debt * 1.1) {
    printf("Your debt is now $%.2f.\n", debt);
  }
  return 0;
}
