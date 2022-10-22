/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 15:29:54 by lgalstya          #+#    #+#             */
/*   Updated: 2022/07/01 15:31:58 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	main_sort(t_stack **a, t_stack **b, int len)
{
	if (len < 2)
		exit(0);
	else if (len == 2)
		sort2(a);
	else if (len == 3)
		sort3(a);
	else if (len == 4)
		sort4(a, b);
	else if (len == 5)
		sort5(a, b);
	else
		sort(a, b);
}
