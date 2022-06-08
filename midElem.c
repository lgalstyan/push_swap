#include "push_swap.h"

int mid(t_stack **a, int n)
{
    int sum;
    int i;
    t_stack *cur;

    sum = 0;
    i = 0;
    cur = *a;
    while(cur && i <= n)
    {
        sum  += cur-> data;
        cur = cur -> next;
        i++;
    }
    printf("\nsum = %d\nmidl = %d\ncount = %d\n",sum, sum/n, n);
    return (sum / n);
}