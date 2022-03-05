#include "../push_swap.h"

void to_intgers(t_data *data)
{
    int y;

    y = 1;
    data->tab = malloc(sizeof(int) * (data->arg_nb - 1));
    if (!data->tab)
        ft_error("Error : Malloc Problem\n");
    while (data->arg_nb > y)
    {
        data->tab[y - 1] = ft_atoi(data->av[y]);
        y++;
    }
}