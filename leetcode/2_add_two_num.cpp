//
// Created by JIESOUL on 2019/9/18.
//
#include <iostream>
using namespace std;
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x): val(x), next(NULL) { }
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
  ListNode result(0);
  ListNode* cur = &result;
  int temp = 0;
  while (l1 != nullptr || l2 != nullptr) {
    int x = 0;
    if (l1 != NULL) {
      x = l1->val;
      l1 = l1->next;
    }
    int y = 0;
    if (l2 != NULL) {
      y = l2->val;
      l2 = l2->next;
    }
    int new_val = x + y + temp;
    ListNode* nl = new ListNode(new_val % 10);
    temp = new_val / 10;
    cur->next = nl;
    cur = cur->next;
  }
  if (temp != 0) {
    ListNode* t = new ListNode(temp);
    cur->next = t;
  }
  return result.next;
}

int main()
{
  ListNode l1(2);
  ListNode l2(4);
  ListNode l3(3);
  l1.next = &l2;
  l2.next = &l3;

  ListNode l4(5);
  ListNode l5(6);
  ListNode l6(4);
  l4.next = &l5;
  l5.next = &l6;

  ListNode* result = addTwoNumbers(&l1, &l4);
  while (result != nullptr) {
    cout << result->val << ", ";
    result = result->next;
  }

  return 0;
}
