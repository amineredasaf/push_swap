#include "../push_swap.h"

void check_doub(t_data *data)
{
    int x;
    int y;
    int lst_len;
    t_stack *tmp;
    t_stack *reset;

    x = 0;
    y = 0;
    reset = data->a;
    tmp = data->a->next;
    lst_len = ft_lstsize(data->a);
    while (x < lst_len)
    {
        y = x + 1;
        tmp = data->a->next;
        while (y < lst_len)
        {
            if (data->a->stack == tmp->stack)
                ft_error("Error : Duplicated Num Found\n");
            tmp = tmp->next;
            y++;
        }
        x++;
        data->a = data->a->next;
    }
    data->a = reset;
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