/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:46:29 by lgalstya          #+#    #+#             */
/*   Updated: 2022/07/02 17:18:17 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	rotate(t_stack **st)
{
	int		dat;
	int		ind;
	t_stack	*cur;
	t_stack	*new;
	t_stack	*clean;

	cur = *st;
	ind = cur ->index;
	dat = cur -> data;
	clean = cur;
	cur = cur -> next;
	free(clean);
	*st = cur;
	while (cur -> next)
	{
		cur = cur -> next;
	}
	new = malloc (sizeof(t_stack *));
	if (!new)
		return ;
	new -> data = dat;
	new -> index = ind;
	new -> next = NULL;
	cur -> next = new;
}

void	ra(t_stack **a)
{
	if ((*a) && (*a)->next)
	{
		rotate(a);
		write(1, "ra\n", 3);
	}
}

void	rb(t_stack **b)
{
	if ((*b) && (*b)->next)
	{
		rotate(b);
		write(1, "rb\n", 3);
	}
}

void	rr(t_stack **a, t_stack **b)
{
	if ((*a) && (*a)->next && *b && (*b)->next)
	{
		rotate(a);
		rotate(b);
		write(1, "rr\n", 3);
	}
}
