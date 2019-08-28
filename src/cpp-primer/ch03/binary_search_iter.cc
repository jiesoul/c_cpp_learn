#include <iostream>
#include <vector>
using std::vector
void binary_search(vector *text)
{
  auto beg = text.begin(), end = text.end();
  auto mid = text.begin() + (end - begin) / 2;
  while (mid != end && *mid != sought) {
    if (cought < *mid)
      end = mid;
    else
      beg = mid + 1;

    mid = beg + (end - beg)/2;
  }
}
