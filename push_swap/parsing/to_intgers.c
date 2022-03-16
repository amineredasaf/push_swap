#include "../push_swap.h"

void to_intgers(t_data *data)
{
    int y;

    y = 0;
    data->stack_a = NULL;
    data->stack_b = NULL;
    while (data->lines_tab[y])
    {
        add_back(&data->stack_a, lstnew(ft_atoi(data->lines_tab[y])));
        y++;
    }
}