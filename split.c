#include "push_swap.h"

int WordCount(char *s)
{
    int i = 0;
    int count = 0;
    int flag = 1;

    while(s[i] == ' ' || s[i] == '\t')
        i++;
    if(i > 0)
        i--;
    while(s[i])
    {
        if(s[i] != ' ' && s[i] != '\t') 
        {
            if(flag == 1)
            count++;
            flag = 0;
        }
        else if(s[i] == ' ' || s[i] == '\t')
            flag = 1;    
        i++;
    }
return (count);
}

long	ft_atoi(char *str)
{
	long	c;
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

static long    wordM(char *s, int st, int en)
{
    char *a;
    int i = 0;
    int len = en -st;
    long res =0;
    a = malloc(len + 1);
    if(!a)
        return (0);
    while(s[i] && i < len)
    {
        /*if(!IsDigit(s[i]))
        {
            print_error();
            exit(0);
        }*/
        a[i] = s[st];
        st++;
        i++;
    }
    a[i] = 0;
    res = ft_atoi(a);
return (res);
}

long *ft_split(char *str)
{
    int i = 0;
    int start = 0;
    int end = 0;
    long   *matrix;
    matrix = malloc(sizeof(int ) * WordCount(str) + 1);
    if(!str || !matrix)
        return (0);
    while(i < WordCount(str))
    {
        while(str[start] && (str[start] == ' ' || str[start] == '\t'))
            start++;
        end = start;
        while(str[end] && str[end] != ' ' && str[end] != '\t')
            end++;
        matrix[i] = wordM(str, start, end);
        i++;
        start = end;
    }
    return (matrix);
}
/*
int main()
{
    char *str = "135 23  2 1 3 4    3";
    int *arr = ft_split(str);
    int i = 0;
    while(i < 7)
    {
    printf("%d\n", arr[i]);
    i++;
    }
    return (0);
}*/