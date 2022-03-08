#include "push_swap.h"

void sa(t_data *data, char *move)
{
    t_stack *tmp;

    tmp = NULL;
    tmp = data->lst_stack_a;
    data->lst_stack_a = data->lst_stack_a->next;
    data->lst_stack_a->next = tmp;
    data->lst_stack_a->previous = tmp->previous;
    ft_putstr(move);
}

void sort_ten(t_data *data)
{
    t_stack *head;
    int x;
    int next;
    int now;
    int prev;

    x = 0;
    next = 0;
    now = 0;
    head = data->lst_stack_a;
    // ft_putstr("Was Here\n");
    // printf("lent here is %d\n", data->lst_len);
    while (x < data->lst_len)
    {
        next = data->lst_stack_a->next->value;
        prev = data->lst_stack_a->previous->value;
        now = data->lst_stack_a->value;
        // printf("now = %d next = %d\n", now, next);
        printf("[head is %d][next is %d][tail is %d]\n",data->lst_stack_a->value, data->lst_stack_a->next->value, data->lst_stack_a->previous->value);
        if (now > next)
            sa(data, "sa\n");
        // else if ()
        x++;
    }
}