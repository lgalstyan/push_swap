/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <lgalstya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 14:02:11 by lgalstya          #+#    #+#             */
/*   Updated: 2022/06/27 17:37:20 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	swap(t_stack **n)
{
	int		swp;
	t_stack	*cur;

	cur = *n;
	if (cur -> next)
	{
		swp = cur -> data;
		cur -> data = cur -> next -> data;
		cur -> next -> data = swp;
		swp = cur -> index;
		cur -> index = cur -> next -> index;
		cur -> next -> index = swp;
	}
}

void	sa(t_stack **a)
{
	t_stack	*cur;

	cur = *a;
	if (cur && cur -> next)
		swap(a);
}

void	sb(t_stack **b)
{
	t_stack	*cur;

	cur = *b;
	if (cur && cur -> next)
		swap(b);
}

void	ss(t_stack **a, t_stack **b)
{
	t_stack	*cur1;
	t_stack	*cur2;

	cur1 = *a;
	cur2 = *b;
	if (cur1 && cur1 -> next && cur2 && cur2 -> next)
	{
		swap(a);
		swap(b);
	}
}
