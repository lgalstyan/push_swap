/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_butterfly.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <lgalstya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 14:25:33 by lgalstya          #+#    #+#             */
/*   Updated: 2022/07/01 15:08:50 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_ind(t_stack **a, int size, int ind)
{
	t_stack	*cur;
	int		i;

	i = 0;
	cur = *a;
	while (cur && cur -> index != ind)
	{
		cur = cur->next;
		i++;
	}
	if (i >= size / 2)
		return (1);
	return (0);
}

void	butterfly(t_stack **a, t_stack **b)
{
	int	m;
	int	f;

	while (b && (*b))
	{
		m = max_index(b);
		f = find_ind(b, count_stack(b), m);
		while ((*b)->index != m)
		{
			if (!f)
				rb(b);
			else
				rrb(b);
		}
		pa(a, b);
	}
}

void	sort(t_stack **a, t_stack **b)
{
	if (count_stack(a) <= 100)
		sort_but(a, b, 15);
	else
		sort_but(a, b, 30);
}

void	sort_but(t_stack **a, t_stack **b, int n)
{
	int	cnt;
	int	size;

	size = count_stack(a);
	cnt = 0;
	while (cnt < size)
	{
		if ((*a)->index <= cnt)
		{
			pb(a, b);
			rb(b);
			cnt++;
		}
		else if ((*a)->index <= cnt + n)
		{
			pb(a, b);
			cnt++;
		}
		else
			ra(a);
	}
	butterfly(a, b);
}
