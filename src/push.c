/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <lgalstya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 14:06:37 by lgalstya          #+#    #+#             */
/*   Updated: 2022/06/30 17:53:28 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_for_push(t_stack **n, int d, int i)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack *));
	if (!new)
		return ;
	new->data = d;
	new->index = i;
	if (*n == NULL)
	{
		new->next = NULL;
		*n = new;
	}
	else
	{
		new -> next = *n;
		*n = new;
	}
}

void	push(t_stack **a, t_stack **b)
{
	t_stack	*cur;

	cur = *a;
	(*a) = (*a)->next;
	if (b == NULL)
	{
		cur -> next = NULL;
		(*b) = cur;
	}
	else
	{
		cur -> next = *b;
		(*b) = cur;
	}
}	

void	pa(t_stack **a, t_stack **b)
{
	push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	push(a, b);
	write(1, "pb\n", 3);
}
