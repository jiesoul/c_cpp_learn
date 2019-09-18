//
// Created by JIESOUL on 2019/9/18.
//
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x): val(x), next(NULL) { }
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
  int temp = 0;
  ListNode result(0);
  ListNode &cur = result;
  while (l1 != NULL || l2 != NULL) {
    int x = (l1 != NULL)
    int val = l1->val + l2->val + temp;
    tem = val / 10;
    cur = ListNode(val % 10);
  }
}
