#include "push_swap.h"

static void swap(t_stack **n)
{
    t_stack *cur = *n;
    if(cur -> next)
    {
        int swp = cur -> data;
        cur -> data = cur -> next -> data;
        cur -> next -> data = swp;
    }
}

void sa(t_stack **a)
{
    t_stack *cur = *a;
    if(cur && cur -> next)
    {
       swap(a); 
       write(1, "sa\n", 3);
    }
}

void sb(t_stack **b)
{
    t_stack *cur = *b;
    if(cur && cur -> next)
    {
       swap(b); 
       write(1, "sb\n", 3);
    }
}

void ss(t_stack **a, t_stack **b)
{
    t_stack *cur1 = *a;
    t_stack *cur2 = *b;
    if(cur1 && cur1 -> next && cur2 && cur2 -> next)
    {
       swap(a);
       swap(b);
       write(1, "ss\n", 3);
    }
}