#include "push_swap.h"

int count_stack(t_stack **a)
{
    t_stack *cur;
    int i;
    
	i = 0;
    cur = *a;
	if(!a)
		return(0);
    while(cur)
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
    while(cur)
    {
        if(cur -> data == min)
            return(i);
        else
            i++;
        cur = cur -> next;
    }
    return(i);
}

int max_index(t_stack **st)
{
	t_stack *cur;
	int max;

	cur = *st;
	max = cur->index;
	while(cur)
	{
		if(cur->index > max)
			max = cur->index;
		cur = cur->next;
	}
	return(max);
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