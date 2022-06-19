#include "push_swap.h"
#include "get_next_line.h"

int	put_instruction(t_stack **a, t_stack **b, char *cmp)
{
	if (!ft_strcmp(cmp, "sa\n"))
		swap(a);
	else if (!ft_strcmp(cmp, "sb\n"))
		swap(b);
	else if (!ft_strcmp(cmp, "ss\n"))
    {
        swap(b);
		swap(a);
    }
	else if (!ft_strcmp(cmp, "pa\n"))
		push(b, a);
	else if (!ft_strcmp(cmp, "pb\n"))
		push(a, b);
	else if (!ft_strcmp(cmp, "ra\n"))
		rotate(a);
	else if (!ft_strcmp(cmp, "rb\n"))
		rotate(b);
	else if (!ft_strcmp(cmp, "rr\n"))
	{
        rotate(a);
        rotate(b);
    }	
	else if (!ft_strcmp(cmp, "rra\n"))
		revrotate(a);
	else if (!ft_strcmp(cmp, "rrb\n"))
		revrotate(b);
	else if (!ft_strcmp(cmp, "rrr\n"))
	{
		revrotate(a);
		revrotate(b);
    }
	else if(write(1, "Error: wrong instruction\n", 26))
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack		**a;
	t_stack		**b;
	char	*cmp;

	a = malloc(sizeof(t_stack **));
	b = malloc(sizeof(t_stack **));

	if (argc < 2)
		return (0);
	*a = NULL;
	*b = NULL;
	//b = NULL;
	//a = NULL;
	start(a, b, argc, argv);
	if (a == NULL || (count_stack(a) == 1 && write(1, "OK\n", 3)))
		exit (1);
	while (1)
	{
		cmp = get_next_line(0);
		if (!cmp)
			break ;
		if (!put_instruction(a, b, cmp))
			exit (1);
	}
	if (CheckSortedStack(a) && b == NULL)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	Destructor(a);
    Destructor(b);
	return (0);
}