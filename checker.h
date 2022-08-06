/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <lgalstya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:54:44 by lgalstya          #+#    #+#             */
/*   Updated: 2022/07/04 14:53:18 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdlib.h>
# include <unistd.h>
# include "push_swap.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42

# endif

void	put_instruction(t_stack **a, t_stack **b, char *cmp);

char	*line_ret(char *s, int fd);

char	*get_next_line(int fd);

int		ft_strchr_1(char *s, int c);

char	*ft_strchr(char *s, int c);

int		ft_strlen(char *s);

char	*ft_strjoin(char *s1, char *s2);

char	*ft_substr(char *s, unsigned int start, size_t len);

char	*ft_strdup(char *s1);

int		ft_strcmp(char *s1, char *s2);

void	start(t_stack **a, int argc, char **argv);

void	destructor(t_stack **st);

void	swap(t_stack **n);

void	revrotate(t_stack **st);

void	rotate(t_stack **st);

#endif
