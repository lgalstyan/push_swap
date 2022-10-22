/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_check_input_values_1.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 17:46:44 by lgalstya          #+#    #+#             */
/*   Updated: 2022/07/04 15:00:24 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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

int	ft_strchr_1(char *s, int c)
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
