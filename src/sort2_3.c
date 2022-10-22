/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 15:26:11 by lgalstya          #+#    #+#             */
/*   Updated: 2022/07/01 15:29:09 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(t_stack **a)
{
	if ((*a)->data > (*a)->next->data)
		sa(a);
}

void	sort3(t_stack **a)
{
	int	elem1;
	int	elem2;
	int	elem3;

	elem1 = (*a)->data;
	elem2 = (*a)->next->data;
	elem3 = (*a)->next->next->data;
	if (elem1 < elem2 && elem1 > elem3 && elem2 > elem3)
		rra(a);
	else if (elem1 > elem2 && elem1 > elem3 && elem2 < elem3)
		ra(a);
	else if (elem1 > elem2 && elem1 < elem3 && elem2 < elem3)
		sa(a);
	else if (elem1 < elem2 && elem1 < elem3 && elem2 > elem3)
	{
		sa(a);
		ra(a);
	}
	else if (elem1 > elem2 && elem1 > elem3 && elem2 > elem3)
	{
		sa(a);
		rra(a);
	}
}
