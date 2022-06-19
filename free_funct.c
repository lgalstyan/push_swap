#include "push_swap.h"

int	free_str(char	**s)
{
	int	i;

	i = -1;
	while (s[++i])
	{
		free(s[i]);
	}
	free(s);
	return (1);
}

int	free_array(long **a)
{
	int		i;

	i = -1;
	while (a[++i])
	{
		free(a[i]);
	}
	free(a);
	return (1);
}

void Destructor(t_stack **st)
{
	t_stack	*node;
	t_stack *tmp;

	tmp = *st;
	while (tmp)
	{
		node = tmp;
		tmp = tmp->next;
			free(node);
	}
	free(st);
}
