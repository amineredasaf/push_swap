#include "push_swap.h"

void    ft_putstr(char *str)
{
    int idx;

    idx = 0;
    while (str[idx])
    {
        write(1, &str[idx], 1);
        idx++;
    }
}

int ft_error(char *str)
{
    ft_putstr(str);
    exit (1);
}