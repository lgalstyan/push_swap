#include "push_swap.h"

void print(t_stack **a, t_stack **b)
{
    t_stack *cur1 = *a;
    t_stack *cur2 = *b;

    while(cur1 || cur2)
    {
        if(cur1)
        {
            printf("%d", cur1 -> data);
            cur1 = cur1 -> next;
        }
        printf("  ");
        if(cur2)
        {
            printf(" %d", cur2 -> data);
            cur2 = cur2 -> next;
        }    
        printf("\n");
    }
	printf("_   _\na   b\n");
}