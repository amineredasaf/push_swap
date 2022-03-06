#include "../push_swap.h"

void check_doub(t_data *data)
{
    int x;
    int y;
    t_stack *tmp;

    tmp = data->a->next;
    y = 0;
    x = 0;

    printf("here\n");
    int lst_len;

    lst_len = ft_lstsize(data->a);
    printf("lent is %d\n", lst_len);
    while (x < lst_len)
    {
        y = x + 1;
        tmp = data->a->next;
        while (y < lst_len)
        {
            printf("[a = %d - ", data->a->stack);
            printf("tmp = %d]\n", tmp->stack);
            if (data->a->stack == tmp->stack)
                ft_error("Error : Duplicated Num Found\n");
            tmp = tmp->next;
            y++;
        }
        x++;
        data->a = data->a->next;
    }
    printf("------------------------------\n");
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
}