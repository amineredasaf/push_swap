#include "../push_swap.h"

void check_doub(t_data *data)
{
    PRINT_FUNC
    int x;
    int y;
    t_stack *tmp;
    t_stack *reset;

    x = 0;
    y = 0;
    reset = data->stack_a;
    tmp = data->stack_a->next;
    data->lst_len = ft_lstsize(data->stack_a);
    while (x < data->lst_len)
    {
        y = x + 1;
        tmp = data->stack_a->next;
        while (y < data->lst_len)
        {
            if (data->stack_a->value == tmp->value)
                ft_error("Error : Duplicated Num Found\n");
            tmp = tmp->next;
            y++;
        }
        x++;
        data->stack_a = data->stack_a->next;
    }
    data->stack_a = reset;
}