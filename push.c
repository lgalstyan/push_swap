#include "push_swap.h"

void push(t_stack **n, int d)
{
    t_stack *new = (t_stack *)malloc(sizeof(t_stack *));
    if(!new)
        return ;
    new -> data = d;
    if(*n == NULL)
    {
        new -> next = NULL;
        *n = new;
    }
    else
    {
        new -> next = *n;
        *n = new;
    }
}

void pa(t_stack **a, t_stack **b)
{
    push(a, (*b) -> data);
    *b = (*b) ->next;
    write(1, "pa\n", 3);
}

void pb(t_stack **a, t_stack **b)
{
    push(b, (*a) -> data);
    *a = (*a) ->next;
    write(1, "pb\n", 3); 
}