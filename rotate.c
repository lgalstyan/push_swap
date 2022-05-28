#include "push_swap.h"

static void rotate(t_stack **st)
{
    int dat;
    t_stack *cur;
    cur = *st;
    dat = cur -> data;
    cur = cur -> next;
    *st = cur;
    while(cur -> next)
    {
        cur = cur -> next;
    }
    t_stack *new;
    new = malloc(sizeof(t_stack *));
    if(!new)
        return ;
    new -> data = dat; 
    new -> next = NULL;
    cur -> next = new;

    //push(st, dat);
}

void ra(t_stack **a)
{
    if(*a && (*a) -> next)
    {
        rotate(a);
        write(1, "ra\n", 3);
    }    
}

void rb(t_stack **b)
{
    if(*b && (*b) -> next)
    {
        rotate(b);
        write(1, "rb\n", 3);
    }
}

void rr(t_stack **a, t_stack **b)
{
    if(*a && (*a) -> next && *b && (*b)-> next)
    {
        rotate(a);
        rotate(b);
        write(1, "rr\n", 3);
    }
}