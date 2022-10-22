/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   No_Need_Sorting.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:08:36 by lgalstya          #+#    #+#             */
/*   Updated: 2022/07/02 17:17:45 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit(char *c)
{
	int	i;

	i = 0;
	if (ft_atoi(c) < -2147483648 || ft_atoi(c) > 2147483647)
		return (0);
	while (c[i])
	{
		if (c[i] == '-' && (c[i + 1] < '0' || c[i + 1] > '9'))
			return (0);
		if (c[i] == ' ' || c[i] == '\t'
			|| c[i] == '-' || (c[i] >= '0' && c[i] <= '9'))
			i++;
		else
			return (0);
	}
	return (1);
}

int	repeat_member(int *arr, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (arr[i] < -2147483648 || arr[i] > 2147483647)
		return (0);
	while (i < len - 1)
	{
		if (arr[i] < -2147483648 || arr[i] > 2147483647)
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (arr[i] == arr[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_sorted(int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		if (arr[i] > arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	check_sorted_stack(t_stack **a)
{
	t_stack	*arr;

	arr = *a;
	while (arr->next)
	{
		if (arr -> data > arr -> next -> data)
			return (0);
		arr = arr -> next;
	}
	return (1);
}
