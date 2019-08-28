#ifndef LIST_H_
#define LIST_H_
#include <stdbool.h>
#define TSIZE
struct film
{
  char title[TSIZE];
  int rating;
};

typedef struct film Item;
typedef struct node
{
  Item item;
  struct node * next;
} Node;

typedef Noe * List;

void InitializeList(List * plist);

bool ListIsEmpty(const List *plist);

bool ListIsFull(const List *plist);

unsigned int ListItemCount(const List *plist);

bool AddItem(Item item, List * plist);

void Traverse(const List *plist, void (*pfun)(Item item));

void EmptyTheList(list * plist, void(*pfun)(Item item));
