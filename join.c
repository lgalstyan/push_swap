#include "push_swap.h"

int len(char *s)
{
    int i;
    i = 0;
    while(s[i])
        i++;
    return (i);
}

char *join(int argc, char **argv)
{
    int i;
    int l;
    int j;
    int t;
    char *str;

    j = 0;
    l = 0;
    i = 1;
    t = 0;
    while (i < argc)
    {
        l += len(argv[i]);
        i++;
    }
    l += argc +1;
    str = (char*)malloc(l);
    i = 1;
    while (i < argc)
    {
        j = 0;
        while(j < len(argv[i]))
        {
            str[t] = argv[i][j];
            j++;
            t++;
        }
        str[t++] = ' ';
        i++;
    }
    str[t] = '\0';
    return (str);
}
/*
int main()
{
    int a = 5;
    char *ar[] = {"21", "15", "3", "1 ", "6"};
    char *str = join(a, ar);
        puts(str);
}
*/