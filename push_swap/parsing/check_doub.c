#include "../push_swap.h"

void check_doub(t_data *data)
{
    int x;
    int y;

    y = 0;
    x = 0;
    while (data->lines_tab[y])
    {
        x = y + 1;
        while (data->lines_tab[x])
        {
            if (data->stack_a[y] == data->stack_a[x])
                ft_error("Error : Duplicated Num Found\n");
            x++;
        }
        y++;
    }
}