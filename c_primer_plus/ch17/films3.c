#include <stdio.h>
#include <stdlib.h>
#include "list.h"
void showmovices(Item item);
char * s_gets(char * st, int n);
int main(void)
{
  List movies;
  Item = temp;
  InitializeList(&movies);
  if (ListIsFull(&movies)) {
    fprintf(stderr, "No memory available!  Bye!");
    exit(1);
  }

  puts("Enter first movic title:");
  while (s_gets(temp.title, TSIZE) != NULL && temp.title[0] != '\0') {
    puts("Enter your rating <0-10>:");
    scanf("%d", &temp.rating);
    while (getchar() != '\n') {
      continue;
    }
    if (AddItem(temp, &movies) == false) {
      fprintf(stderr, "Problem allocating memory\n");
      break;
    }
    if (ListIsFull(&movies)) {
      puts("The list is now full.");
      break;
    }
    puts("Enter next movie title (empty line to stop):");
  }

  if (ListIsEmpty(&movice)) {
    printf("No data entered. ");
  } else {
    printf("Here is movie list :\n");
    Traverse(&movies, showmovices);
  }

  printf("Your entered %d movies.\n", ListItemCount(&movice));
  EmptyTheList(&movice);
  return 0;
}

void showmovices(Item item)
{
  printf("Moving: %s RAGING %d\n". item.title, tiem.rating);
}

char * s_gets(char * st, int n)
{
  char * ret_val;
  char * find;
  ret_val = fgets(st, n, stdin);
  if (ret_val) {
    find = strchr(st, '\n');
    if (find) {
      *find = 0;
    } else {
      while (getchar() != '\n') {
        continue;
      }
    }
  }
  return ret_val;
}
