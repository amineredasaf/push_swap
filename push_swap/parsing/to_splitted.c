#include "../push_swap.h"

void   to_splitted(t_data *data)
{
    PRINT_FUNC
    data->lines_tab = ft_split(data->line, ' ');
}