#include "push_swap.h"

int IsDigit(char *c)
{
    int i;
    i = 0;
    while(c[i])
    {
        if(c[i] == ' ' || c[i] == '\t' || c[i]  == '-' || (c[i] >= '0' && c[i] <= '9'))
            i++;
        else
            return (0);
    }
    return (1);
}

/*int CheckSorted(int *arr,int len)
{
    if (len == 1 || len == 0)
        return (1);
    if (arr[len - 1] > arr[len - 2])
        return (0);
    return CheckSorted(arr, len - 1);
}*/


int RepeatMember(int *arr, int len)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(i < len - 1)
    {
        j = i + 1;
        while(j < len)
        {
            if(arr[i] == arr[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int CheckSorted(int *arr,int len)
{
    int i;
    i = 0;
    while(i < len - 1)
    {
        if(arr[i] > arr[i + 1])
            return(0);
        i++;
    }
    return (1);
}/*
int main()
{
    int i = 0;
    int arr[] = {1, 2, 3, 4};
    if(CheckSorted(arr, 4)==1)
        printf("Sorted");
    else
        printf("No sorted");
    if(IsDigit("99 45  9 54  k 1 1"))
        printf("1");
    else
    {
        printf("0");
    }
}*/