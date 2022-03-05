#include "../push_swap.h"

void check_doub(t_data *data)
{
    int x;
    int y;

    y = 0;
    x = 0;
    while (data->arg_nb > y)
    {
        x = y + 1;
        while (data->arg_nb - 1 > x)
        {
            if (data->tab[y] == data->tab[x])
                ft_error("Error : Duplicated Num Found\n");
            x++;
        }
        y++;
    }
   
}