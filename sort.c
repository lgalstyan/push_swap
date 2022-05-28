#include "push_swap.h"

static void sort2(t_stack **a)
{
    if((*a) -> data > (*a) ->next -> data)
    sa(a);
    //exit(0);
}

static void sort3(t_stack **a)
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

static int min(t_stack **s)
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

static int max(t_stack **s)
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

static int FindIndex(t_stack **a, int min)
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

static void sort4(t_stack **a, t_stack **b)
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

static void sort5(t_stack **a, t_stack **b)
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
   // else
     //   SortMore(a, b);
}

/*
int main()
{
    t_stack **a;
    a = malloc(sizeof(t_stack **));
	*a = NULL;
    push(a, 0);
    push(a, 3);
    push(a, 2);
    push(a, 9);
    int i = MinIndex(a, min(a));
    printf("%d ", i);
}*/