/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_revrotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:16:26 by lgalstya          #+#    #+#             */
/*   Updated: 2022/07/04 15:16:31 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	revrotate(t_stack **st)
{
	int		dat;
	int		ind;
	t_stack	*cur;

	cur = *st;
	while (cur -> next -> next)
	{
		cur = cur -> next;
	}
	dat = cur -> next -> data;
	ind = cur -> next -> index;
	free(cur ->next);
	cur -> next = NULL;
	push_for_push(st, dat, ind);
}

void	rra(t_stack **a)
{
	if ((*a) && (*a)->next)
	{
		revrotate(a);
	}
}

void	rrb(t_stack **b)
{
	if ((*b) && (*b)->next)
	{
		revrotate(b);
	}
}

void	rrr(t_stack **a, t_stack **b)
{
	if ((*a) && (*a)->next && (*b) && (*b)-> next)
	{
		revrotate(a);
		revrotate(b);
	}
}
