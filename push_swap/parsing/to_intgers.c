#include "../push_swap.h"

void to_intgers(t_data *data)
{
    int y;

    y = 0;
    // data->stack_a = malloc(sizeof(int) * (data->arg_nb - 1));
    // if (!data->stack_a)
    //     ft_error("Error : Malloc Problem\n");
    data->stack_a = NULL;
    data->stack_b = NULL;
    while (data->lines_tab[y])
    {
        add_back(&data->stack_a, lstnew(ft_atoi(data->lines_tab[y])));
        // data->stack_a[y] = ft_atoi(data->lines_tab[y]);
        y++;
    }
}