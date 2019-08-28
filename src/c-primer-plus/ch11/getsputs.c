#include <stdio.h>
#define STLEN 5
int main(void) {
  char words[STLEN];
  puts("Enter a string, please.");
  gets(words);
  printf("Your string twice:\n");
  printf("%s\n", words);
  puts(words);
  puts("Done.");
  return 0;
}
