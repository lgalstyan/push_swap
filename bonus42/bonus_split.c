/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:17:19 by lgalstya          #+#    #+#             */
/*   Updated: 2022/07/04 15:18:05 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	word_count(char *s)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	count = 0;
	flag = 1;
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	if (i > 0)
		i--;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\t')
		{
			if (flag == 1)
			count++;
			flag = 0;
		}
		else if (s[i] == ' ' || s[i] == '\t')
			flag = 1;
		i++;
	}
	return (count);
}

long	ft_atoi(char *str)
{
	int		c;
	long	n;
	long	min;

	c = 0;
	n = 0;
	min = 1;
	if (!str)
		return (0);
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	if (str[c] == '-')
		min = -1;
	if (str[c] == '+' || str[c] == '-')
		c++;
	while (str[c] >= '0' && str[c] <= '9')
	{
		n = (str[c] - '0') + (n * 10);
		c++;
	}
	return (n * min);
}

static	int	wordm(char *s, int st, int en)
{
	char	*a;
	int		i;
	int		len;
	int		res;

	i = 0;
	len = en - st;
	res = 0;
	a = malloc(len + 1);
	if (!a)
		return (0);
	while (s[i] && i < len)
	{
		a[i] = s[st];
		st++;
		i++;
	}
	a[i] = 0;
	if (!check_critical_values(a))
		print_error();
	res = ft_atoi(a);
	free(a);
	return (res);
}

int	*ft_split(char *str)
{
	int		i;
	int		start;
	int		end;
	int		*matrix;

	i = 0;
	start = 0;
	end = 0;
	matrix = malloc(sizeof(int ) * word_count(str) + 1);
	if (!str || !matrix)
		return (0);
	while (i < word_count(str))
	{
		while (str[start] && (str[start] == ' ' || str[start] == '\t'))
			start++;
		end = start;
		while (str[end] && str[end] != ' ' && str[end] != '\t')
			end++;
		matrix[i] = wordm(str, start, end);
		i++;
		start = end;
	}
	return (matrix);
}
