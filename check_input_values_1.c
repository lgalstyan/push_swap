/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_values_1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:56:53 by lgalstya          #+#    #+#             */
/*   Updated: 2022/07/04 16:51:19 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s && s[i] != 0)
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
		}
		if (s1[i] == '\0')
			return ((-1) * s2[i]);
		i++;
	}
	return (0);
}

static int	ft_strchr(const char *s, int c)
{
	int	i;

	i = 1;
	if (c < 0 || c > 127)
		return (0);
	while (s[i] || c == 0)
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	check_critical_values(char *line)
{
	int	i;

	i = 0;
	if (ft_strlen(line) > 11)
		return (0);
	else if (line[0] != '-' && ft_strlen(line) > 10)
		return (0);
	else if (line[0] != '-' && ft_strlen(line) > 9
		&& ft_strcmp(line, "2147483647") > 0)
		return (0);
	else if (line[0] == '-' && ft_strlen(line) > 10
		&& ft_strcmp(line, "-2147483648") > 0)
		return (0);
	else if (ft_strchr(line, '-'))
		return (0);
	++i;
	return (1);
}
