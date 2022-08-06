/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:17:08 by lgalstya          #+#    #+#             */
/*   Updated: 2022/07/04 15:17:10 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rotate(t_stack **st)
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
	}
}

void	rb(t_stack **b)
{
	if ((*b) && (*b)->next)
	{
		rotate(b);
	}
}

void	rr(t_stack **a, t_stack **b)
{
	if ((*a) && (*a)->next && *b && (*b)->next)
	{
		rotate(a);
		rotate(b);
	}
}
