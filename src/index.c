/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <lgalstya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:38:52 by lgalstya          #+#    #+#             */
/*   Updated: 2022/06/11 13:40:31 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_indexes(t_stack **stack)
{
	int		i;
	int		j;
	int		size;
	t_stack	*node;
	t_stack	*min;

	if (!stack || !*stack)
		return ;
	i = -1;
	size = count_stack(stack);
	while (++i < size)
	{
		min = *stack;
		node = *stack;
		while (min->index != -1)
			min = min->next;
		j = -1;
		while (++j < size)
		{
			if (node->index == -1 && node->data < min->data)
				min = node;
			node = node ->next;
		}
	min->index = i;
	}
}
