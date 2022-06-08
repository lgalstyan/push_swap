#include "push_swap.h"

void sort4(t_stack **a, t_stack **b)
{
    int minElem;
    int minInd;

    minElem = min(a);
    minInd = FindIndex(a, minElem);
    while((*a) -> data != minElem && minInd != 0)
    {
        if(minInd > 2)
            rra(a);
        else
            ra(a);
        minInd = FindIndex(a, minElem);
    }
    pb(a, b);
    sort3(a);
    pa(a, b);
}

void sort5(t_stack **a, t_stack **b)
{
    int minElem;
    int minInd;

    minElem = min(a);
    minInd = FindIndex(a, minElem);
    while((*a) -> data != minElem && minInd != 0)
    {
        if(minInd > 2)
            rra(a);
        else
            ra(a);
        minInd = FindIndex(a, minElem);
    }
    pb(a, b);
    sort4(a, b);
    pa(a, b);
}