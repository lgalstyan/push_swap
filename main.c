#include "push_swap.h"


void start(t_stack **a, t_stack **b, int argc, char **argv)
{
	int *arr;
	char *str;
	int len;
	int i;

	str = join(argc, argv);
	len = WordCount(str);
	arr = ft_split(str);
	i = len - 1;
	
	if(!RepeatMember(arr, len) || !IsDigit(str))
    {
		printf("RepeatMember || IsDigit");
		print_error();
		exit(0);
	}
	else if(CheckSorted(arr, len))
	{
		printf("CheckSorted");
		exit(0);
	}
	else
	{
		while(i >= 0)
    	{
    	    push(a, arr[i]);
    	    i--;
    	}
	}
	MainSort(a, b, len);
	//printf("len  = %d\n", len);
}

int main(int argc, char **argv)
{
    t_stack **a;
    t_stack **b;
	a = malloc(sizeof(t_stack **));
	b = malloc(sizeof(t_stack **));
	*a = NULL;
	*b = NULL;
    start(a, b, argc, argv);
	print(a, b);
	return(0);
}