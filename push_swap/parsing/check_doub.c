#include "../push_swap.h"

void check_doub(t_data *data)
{
    int x;
    int y;
    t_stack *tmp;
    t_stack *reset;

    x = 0;
    y = 0;
    reset = data->stack_a;
    tmp = data->stack_a->next;
    data->lst_len = ft_lstsize(data->stack_a);
    printf("lent is : %d\n", data->lst_len);
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
    // arrays :
    // while (data->lines_tab[y])
    // {
    //     x = y + 1;
    //     while (data->lines_tab[x])
    //     {
    //         if (data->stack_a[y] == data->stack_a[x])
    //             ft_error("Error : Duplicated Num Found\n");
    //         x++;
    //     }
    //     y++;
    // }