#include "push_swap.h"

int main(int ac, char **av)
{
    t_data data;

    if (ac <= 1)
        ft_error("Error : Not enough input arguments\n");
    data.arg_nb = ac;
    data.av = av;
    parsing(&data);
    printf("parsing is done\n");
    insert(&data);
    free(data.stack_a);
    
    int x;
    x = 0;
    while (data.lines_tab[x])
    {
        free(data.lines_tab[x]);
        x++;
    }
    free(data.lines_tab);
    while(1);
    return (0);
}