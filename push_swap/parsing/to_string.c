#include "../push_swap.h"

void to_string(t_data *data)
{
    PRINT_FUNC
    int y;

    y = 1;
    while(data->arg_nb > y)
    {
        data->line = ft_strjoin(data->line, data->av[y]);
        y++;
    }
}