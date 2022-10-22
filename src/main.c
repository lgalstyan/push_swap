/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <lgalstya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:42:15 by lgalstya          #+#    #+#             */
/*   Updated: 2022/07/02 17:16:32 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start(t_stack **a, t_stack **b, int argc, char **argv)
{
	int		*arr;
	char	*str;
	int		len;
	int		i;

	str = join(argc, argv);
	len = word_count(str);
	arr = ft_split(str);
	i = len - 1;
	if (!(is_digit(str)) || !(repeat_member(arr, len)))
	{
		print_error();
		destructor(a);
	}
	else if (check_sorted(arr, len))
		exit(0);
	else
		while (i >= 0)
			push_for_push(a, arr[i--], -1);
	free(str);
	free(arr);
	add_indexes(a);
	main_sort(a, b, len);
}

void	destructor(t_stack **st)
{
	t_stack		*node;
	t_stack		*tmp;

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
	destructor(a);
	free(b);
	return (0);
}
