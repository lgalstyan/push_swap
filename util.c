#include "push_swap.h"

int count_stack(t_stack **a)
{
    int i = 1;
    t_stack *cur;
    
    cur = *a;
    while(cur -> next)
    {
        cur = cur -> next;
        i++;
    }
    return (i);
}

int FindIndex(t_stack **a, int min)
{
    int i;
    t_stack *cur;

    cur = *a;
    i = 0;
    while(cur-> next)
    {
        if(cur -> data == min)
            return(i);
        else
            i++;
        cur = cur -> next;
    }
    return(i);
}

int max(t_stack **s)
{
    t_stack *cur;
    int m;

    cur = *s;
    m = cur -> data;
    while(cur)
    {
        if(cur -> data > m)
        m = cur -> data;
        cur = cur -> next;
    }
    return (m);
}

int min(t_stack **s)
{
    t_stack *cur;
    int m;

    cur = *s;
    m = cur -> data;
    while(cur)
    {
        if(cur -> data < m)
        m = cur -> data;
        cur = cur -> next;
    }
    return (m);
}