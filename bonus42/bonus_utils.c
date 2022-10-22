/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:50:08 by lgalstya          #+#    #+#             */
/*   Updated: 2022/07/04 14:56:13 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	count_stack(t_stack **a)
{
	t_stack	*cur;
	int		i;

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

void	destructor(t_stack **st)
{
	t_stack	*node;
	t_stack	*tmp;

	tmp = *st;
	while (tmp)
	{
		node = tmp;
		tmp = tmp->next;
		free(node);
	}
	free(st);
}
