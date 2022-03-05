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
    free(data.tab);
    return (0);
}