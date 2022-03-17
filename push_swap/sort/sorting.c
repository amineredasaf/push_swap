#include "../push_swap.h"

int if_sorted(t_stack *stack)
{
    t_stack *head;
    t_stack *tmp;

    head = stack;
    tmp = stack;
    while (tmp && tmp->next != head)
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
    state = if_sorted(data->stack_a);
    if (state == SORTED)
        ft_error("THE NUMBERS IS SORTED [delete this in the end]\n");
    else
    {
        if (data->lst_len == 2)
            sort_two(data->stack_a);
        else if (data->lst_len == 3)
            sort_three(data);
        else if (data->lst_len <= 8)
            sort_five(data);
        else
            sort_hundred(data);
    }
}