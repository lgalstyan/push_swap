/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_join.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 17:47:47 by lgalstya          #+#    #+#             */
/*   Updated: 2022/07/04 16:19:56 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static int	no_digit(char *s)
{
	int	i;

	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		++i;
	if (s[i] == '\0')
		return (1);
	return (0);
}

static void	check_1(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (no_digit(argv[i]))
			print_error();
		i++;
	}
}	

char	*join(int argc, char **argv)
{
	int		i;
	int		l;
	int		j;
	int		t;
	char	*str;

	l = 0;
	i = 1;
	t = 0;
	while (i < argc)
		l += len(argv[i++]);
	l += argc + 1;
	str = (char *)malloc (l);
	i = 0;
	check_1(argc, argv);
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
