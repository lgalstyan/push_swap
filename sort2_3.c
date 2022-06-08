#include "push_swap.h"

void sort2(t_stack **a)
{
    if((*a) -> data > (*a) ->next -> data)
    sa(a);
    //exit(0);
}
void sort3(t_stack **a)
{
    int elem1 = (*a) -> data;
    int elem2 = (*a) ->next -> data;
    int elem3 = (*a) ->next -> next -> data;
    //231
    if(elem1 < elem2 && elem1 > elem3 && elem2 > elem3)
        rra(a);
    //312
    else if(elem1 > elem2 && elem1 > elem3 && elem2 < elem3)
        ra(a);
    // 213
    else if(elem1 > elem2 && elem1 < elem3 && elem2 < elem3)
        sa(a);
    //132
    else if(elem1 < elem2 && elem1 < elem3 && elem2 > elem3)
    {
        sa(a);
        ra(a);
    }
    //3 2 1
    else if(elem1 > elem2 && elem1 > elem3 && elem2 > elem3)
    {
        sa(a);
        rra(a);
    }
}