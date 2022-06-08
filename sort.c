#include "push_swap.h"

int enough(t_stack **a, int n)
{
    t_stack *cur;

    cur = *a;
    while(cur)
    {
        if(cur -> data < n)
            return (1);
        cur = cur -> next;
    }
    return (0);
}

void ss_iPah(t_stack **a, t_stack **b)
{
    if((*a)-> data < (*a) -> next -> data && (*b)-> data < (*b) -> next -> data)
        ss(a, b);
}

void SortMore(t_stack **a, t_stack **b)
{
    int midl;
    int i;
    int arr[count_stack(a)-1];

    midl = mid(a, count_stack(a));
    i = 0;
    while(!CheckSortedStack(a) || b)
    {
        while(a && enough(a, midl) == 1)
        {
            if((*a) -> data < midl)
            {
                pb(a, b);
                arr[i] = 
                i++;
            }
            else
                ra(a);
        }
        ss_iPah(a, b);
    }
}
void MainSort(t_stack **a, t_stack **b, int len)
{
    if(len < 2)
        exit(0);
    else if(len == 2)
        sort2(a);
    else if(len == 3)
        sort3(a);
   else if(len == 4)
        sort4(a, b);
    else if(len == 5)
        sort5(a, b);
    else
       SortMore(a, b);
}