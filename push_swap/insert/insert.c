#include "../push_swap.h"

void insert(t_data *data)
{
    int y;

    y = 0;
    data->a = (t_stack *)malloc(sizeof(t_stack));
    if(!data->a)
        ft_error("Error : Malloc Problem\n");
    while(data->arg_nb > y)
    {
        printf("%d\n", data->a->stack);
        printf("%d\n", data->tab[0]);
        add_back(&data->a, lstnew(data->tab[y]));
        y++;
    }
}


// lst_addbadck(stack_a , lst_new(num[i]))