#include "push_swap.h"

static void revrotate(t_stack **st)
{
    int dat;
    t_stack *cur;
    cur = *st;
    while(cur -> next -> next)
    {
        cur = cur -> next;
    }
    dat = cur -> next -> data;
    cur -> next = NULL;
    push(st, dat);
}

void rra(t_stack **a)
{
    if(*a && (*a) -> next)
    {
        revrotate(a);
        write(1, "rra\n", 4);
    }
}

void rrb(t_stack **b)
{
    if(*b && (*b) -> next)
    {
        revrotate(b);
        write(1, "rrb\n", 4);
    }
}

void rrr(t_stack **a, t_stack **b)
{
    if(*a && (*a) -> next && *b && (*b)-> next)
    {
        revrotate(a);
        revrotate(b);
        write(1, "rrr\n", 4);
    }
}