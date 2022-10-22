/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <lgalstya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:54:25 by lgalstya          #+#    #+#             */
/*   Updated: 2022/07/04 15:13:59 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	put_instruction(t_stack **a, t_stack **b, char *cmp)
{
	if (!ft_strcmp(cmp, "sa\n"))
		sa(a);
	else if (!ft_strcmp(cmp, "sb\n"))
		sb(b);
	else if (!ft_strcmp(cmp, "ss\n"))
		ss(a, b);
	else if (!ft_strcmp(cmp, "pa\n"))
		pa(b, a);
	else if (!ft_strcmp(cmp, "pb\n"))
		pb(a, b);
	else if (!ft_strcmp(cmp, "ra\n"))
		ra(a);
	else if (!ft_strcmp(cmp, "rb\n"))
		rb(b);
	else if (!ft_strcmp(cmp, "rr\n"))
		rr(a, b);
	else if (!ft_strcmp(cmp, "rra\n"))
		rra(a);
	else if (!ft_strcmp(cmp, "rrb\n"))
		rrb(b);
	else if (!ft_strcmp(cmp, "rrr\n"))
		rr(a, b);
	else
		write(1, "Error\n", 6);
}

void	start(t_stack **a, int argc, char **argv)
{
	int		*arr;
	char	*str;
	int		len;
	int		i;

	str = join(argc, argv);
	len = word_count(str);
	arr = ft_split(str);
	i = len - 1;
	if (!(repeat_member(arr, len)) || !(is_digit(str)))
	{
		print_error();
		destructor(a);
	}
	else
	{
		while (i >= 0)
		{
			push_for_push(a, arr[i], -1);
			i--;
		}
	}
	free(str);
	free(arr);
}

static void	check_one(int n)
{
	if (n < 2)
		exit(0);
}

int	main(int argc, char **argv)
{
	t_stack		**a;
	t_stack		**b;
	char		*cmp;

	a = malloc(sizeof(t_stack **));
	b = malloc(sizeof(t_stack **));
	check_one(argc);
	*a = NULL;
	*b = NULL;
	start(a, argc, argv);
	if (a == NULL)
		print_error();
	cmp = get_next_line(0);
	while (cmp)
	{
		put_instruction(a, b, cmp);
		cmp = get_next_line(0);
	}
	sleep(1000);
	if (*b == NULL && check_sorted_stack(a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	destructor(a);
	return (0);
}
