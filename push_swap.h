#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct s_stack
{
    int data;
	int	index;
    struct s_stack *next;
}               t_stack;
//deleted
void print(t_stack **a, t_stack **b);
//deleted


void push(t_stack **a, t_stack **b);
void push_for_push(t_stack **n, int d, int i);
void pa(t_stack **a, t_stack **b);
void pb(t_stack **a, t_stack **b);
//void swap(t_stack **n);
void sa(t_stack **a);
void sb(t_stack **b);
void ss(t_stack **a, t_stack **b);
//void rotate(t_stack **st);
void ra(t_stack **a);
void rb(t_stack **a);
void rr(t_stack **a, t_stack **b);
//void revrotate(t_stack **st);
void rra(t_stack **a);
void rrb(t_stack **b);
void rrr(t_stack **a, t_stack **b);
void sort3(t_stack **a);
void sort2(t_stack **a);
void sort4(t_stack **a, t_stack **b);
void sort5(t_stack **a, t_stack **b);
int FindIndex(t_stack **a, int min);
int max(t_stack **s);
int min(t_stack **s);
//int max_1(t_stack **s, int max, int a);
void MainSort(t_stack **a, t_stack **b, int len);
void sort_but(t_stack **a, t_stack **b, int n);
void sort(t_stack **a, t_stack **b);
int max_index(t_stack **st);

int	ft_atoi(char *str);
int *ft_split(char *s);
int WordCount(char *s);
int count_stack(t_stack **a);
char *join(int argc, char **argv);
int CheckSorted(int *arr,int len);
void print_error();
int IsDigit(char *c);
int RepeatMember(int *arr, int len);
int CheckSortedStack(t_stack **a);
void add_indexes(t_stack **stack);
void Destructor(t_stack **st);

#endif