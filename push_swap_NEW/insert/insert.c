#include "../push_swap.h"

void insert(t_data *data)
{
    int y;

    y = 0;
    while(data->lines_tab[y])
    {
       printf("[%d]\n", data->stack_a[y]);
       y++;
    }
}


// lst_addbadck(stack_a , lst_new(num[i]))