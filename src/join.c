/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <lgalstya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:27:27 by lgalstya          #+#    #+#             */
/*   Updated: 2022/06/30 17:51:55 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*join(int argc, char **argv)
{
	int		i;
	int		l;
	int		j;
	int		t;
	char	*str;

	j = 0;
	l = 0;
	i = 1;
	t = 0;
	while (i < argc)
		l += len(argv[i++]);
	l += argc +1;
	str = (char *)malloc (l);
	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (j < len (argv[i]))
			str[t++] = argv[i][j++];
		str[t++] = ' ';
	}
	str[t] = ' ';
	str[t + 1] = '\0';
	return (str);
}
