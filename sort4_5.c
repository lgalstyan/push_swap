/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4_5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 15:20:03 by lgalstya          #+#    #+#             */
/*   Updated: 2022/07/01 15:23:29 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort4(t_stack **a, t_stack **b)
{
	int	min_elem;
	int	min_ind;

	min_elem = min(a);
	min_ind = find_index(a, min_elem);
	while ((*a)->data != min_elem && min_ind != 0)
	{
		if (min_ind > 2)
			rra(a);
		else
			ra(a);
		min_ind = find_index(a, min_elem);
	}
	pb(a, b);
	sort3(a);
	pa(a, b);
}

void	sort5(t_stack **a, t_stack **b)
{
	int	min_elem;
	int	min_ind;

	min_elem = min(a);
	min_ind = find_index(a, min_elem);
	while ((*a)->data != min_elem && min_ind != 0)
	{
		if (min_ind > 2)
			rra(a);
		else
			ra(a);
		min_ind = find_index(a, min_elem);
	}
	pb(a, b);
	sort4(a, b);
	pa(a, b);
}
