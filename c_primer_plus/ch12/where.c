#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int static_stroe = 30;
const char * pcg = "String Literal";
int main() {
  int auto_store = 40;
  char auto_string [] = "Auto char Array";
  int * pi;
  char * pc1;
  pi = (int *) malloc(sizeof(int));
  *pi = 35;
  pc1 = (char *)malloc(strlen("Dynamic String") + 1);
  strcpy(pc1, "Dynamic String");
  printf("static_store: %d at %p\n", static_stroe, &static_stroe);
  printf("  auto_store: %d at %p\n", auto_store, &auto_store);
  printf("         *pi: %d at %p\n", *pi, pi);
  printf("     %s at %p\n", pcg, pcg);
  printf("  %s at %p\n", auto_string, auto_string);
  printf("   %s at %p\n", pc1, pc1);
  printf("    %s at %p\n", "Quoted String", "Quoted String");
  free(pi);
  free(pc1);
  return 0;
}
