//
// Created by JIESOUL on 2019/9/24.
//
#include "Stack.h"
Stack s_val(10);
void f(Stack& s_ref, int i)
{
  Stack s_var2(i);
  Stack* s_ptr = new Stack(20);

  s_val1.push('a');
  s_var2.push('b');
  s_ref.push('c');
  s_ptr->push('d');

}
