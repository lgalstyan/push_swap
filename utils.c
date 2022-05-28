#include "push_swap.h"

int count_stack(t_stack **a)
{
    int i = 0;
    t_stack *cur;
    
    cur = *a;
    while(cur -> next)
    {
        cur = cur -> next;
        i++;
    }
    return (i);
}