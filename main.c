/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <lgalstya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:42:15 by lgalstya          #+#    #+#             */
/*   Updated: 2022/06/11 13:54:32 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start(t_stack **a, t_stack **b, int argc, char **argv)
{
	long	*arr;
	char	*str;
	int		len;
	int		i;

	str = join(argc, argv);
	len = WordCount(str);
	arr = ft_split(str);
	i = len - 1;
	if (!(RepeatMember(arr, len)) || !(IsDigit(str)))
	{
		print_error();
		Destructor(a);
	}
	else if (CheckSorted(arr, len))
		exit(0);
	else
	{
		while (i >= 0)
		{
			push_for_push(a, arr[i], -1);
			i--;
		}
	}
	add_indexes(a);
	MainSort(a, b, len);
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

int	main(int argc, char **argv)
{
	t_stack		**a;
	t_stack		**b;

	a = malloc(sizeof(t_stack **));
	b = malloc(sizeof(t_stack **));
	*a = NULL;
	*b = NULL;
	start(a, b, argc, argv);
	//print(a, b);
	//sleep(1000);
	Destructor(a);
	Destructor(b);
	//sleep(1000);
	return (0);
}
