/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:48:13 by lgalstya          #+#    #+#             */
/*   Updated: 2022/07/02 17:15:22 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
}					t_stack;

void	push(t_stack **a, t_stack **b);
void	push_for_push(t_stack **n, int d, int i);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **a);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	sort3(t_stack **a);
void	sort2(t_stack **a);
void	sort4(t_stack **a, t_stack **b);
void	sort5(t_stack **a, t_stack **b);
int		find_index(t_stack **a, int min);
int		max(t_stack **s);
int		min(t_stack **s);
void	main_sort(t_stack **a, t_stack **b, int len);
void	sort_but(t_stack **a, t_stack **b, int n);
void	sort(t_stack **a, t_stack **b);
int		max_index(t_stack **st);

long	ft_atoi(char *str);
int		ft_strlen(char *s);
int		ft_strcmp(char *s1, char *s2);
int		check_critical_values(char *line);
int		*ft_split(char *s);
int		word_count(char *s);
int		count_stack(t_stack **a);
int		check_sorted(int *arr, int len);
char	*join(int argc, char **argv);
void	print_error(void);
int		is_digit(char *c);
int		repeat_member(int *arr, int len);
int		check_sorted_stack(t_stack **a);
void	add_indexes(t_stack **stack);
void	destructor(t_stack **st);

#endif
