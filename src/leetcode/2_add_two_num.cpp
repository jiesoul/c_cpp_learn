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
  if(l1 == nullptr && l2 == nullptr) {
    return nullptr;
  } else if (l1 != nullptr && l2 == nullptr) {
    return l1;
  } else if (l2 != nullptr && l1 == nullptr) {
    return l2;
  } else {
    int v = l1->val + l2->val;
    ListNode result(v % 10);
    if (v / 10 != 0) {
      ListNode temp(v / 10);
      l1->next = addTwoNumbers(l1->next, &temp);
    }
    result.next = addTwoNumbers(l1->next, l2->next);
    return &result;
  }
}
