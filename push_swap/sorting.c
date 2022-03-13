#include "push_swap.h"

int if_sorted(t_data *data)
{
    t_stack *head;
    t_stack *tmp;

    head = data->stack_a;
    tmp = data->stack_a;
    // add if statment if the number is only one   
    // to do in the while (tmp && ...  
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
    t_stack *head;

    head = data->stack_a;
    state = if_sorted(data);
    if (state == SORTED)
        ft_error("THE NUMBERS IS SORTED\n");
    else
    {
        if (data->lst_len == 2)
            sort_two(data->stack_a);
        else if (data->lst_len == 3)
            sort_three(data);
        else
            sort_five(data);
    }
}