/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <lgalstya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:43:31 by lgalstya          #+#    #+#             */
/*   Updated: 2022/07/01 16:24:46 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_stack(t_stack **a)
{
	int		i;
	t_stack	*cur;

	i = 0;
	cur = *a;
	if (!a)
		return (0);
	while (cur)
	{
		cur = cur -> next;
		i++;
	}
	return (i);
}

int	find_index(t_stack **a, int min)
{
	int		i;
	t_stack	*cur;

	cur = *a;
	i = 0;
	while (cur)
	{
		if (cur -> data == min)
			return (i);
		else
			i++;
		cur = cur -> next;
	}
	return (i);
}

int	max_index(t_stack **st)
{
	t_stack	*cur;
	int		max;

	cur = *st;
	max = cur->index;
	while (cur)
	{
		if (cur->index > max)
			max = cur->index;
		cur = cur->next;
	}
	return (max);
}

int	max(t_stack **s)
{
	t_stack	*cur;
	int		m;

	cur = *s;
	m = cur -> data;
	while (cur)
	{
		if (cur -> data > m)
			m = cur -> data;
		cur = cur -> next;
	}
	return (m);
}

int	min(t_stack **s)
{
	t_stack	*cur;
	int		m;

	cur = *s;
	m = cur -> data;
	while (cur)
	{
		if (cur -> data < m)
			m = cur -> data;
		cur = cur -> next;
	}
	return (m);
}
