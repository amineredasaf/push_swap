#include "push_swap.h"

int if_sorted(t_data *data)
{
    t_stack *head;
    t_stack *tmp;

    head = data->lst_stack_a;
    tmp = data->lst_stack_a;
    while (tmp->next != head)
    {
        if (tmp->value > tmp->next->value)
            return (NOT_SORTED);
        tmp = tmp->next;
    }
    return (SORTED);
}

void sorting(t_data *data)
{
    int state;
    // int next = 0;
    // int now = 0;
    t_stack *head;

    head = data->lst_stack_a;
    state = if_sorted(data);
    if (state == SORTED)
        ft_error("THE NUMBERS IS STORTED\n");
    else
    {
        // next = data->lst_stack_a->next->value;
        // now = data->lst_stack_a->value;
        // printf("now = %d next = %d\n", now, next);
        if (data->lst_len <= 10)
            sort_ten(data);
    }
    // }
    
}