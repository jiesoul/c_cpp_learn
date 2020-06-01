//
// Created by JIESOUL on 2019/9/16.
//
template <typename T> int compare(const T &v1, const T &v2)
{
  if (v1 < v2) return -1;
  if (v2 < v1) return 1;
  return 0;
}

template <typename T> T foo(T* p)
{
  T tmp = *p;

  return tmp;
}
