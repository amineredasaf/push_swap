#include "../push_swap.h"

void    sort_five(t_data *data)
{
    int x;
    int current;
    int next;
    int tail;
    
    x = 0;

    while(x != SORTED)
    {
        current = data->stack_a->value;
        next = data->stack_a->next->value;
        tail = data->stack_a->previous->value;
        if (current > next && current < tail)
            swap(data->stack_a, "sa\n");
        else if (current < next && current < tail && !if_sorted(data->stack_a))
            push(&data->stack_a, &data->stack_b, "pb\n");
        else if (current > next && current > tail)
            rotate(&data->stack_a, "ra\n");
        else if (current < next && current > tail)
            reverse_rotate(&data->stack_a, "rra\n");
        else if (current < next && current < tail && if_sorted(data->stack_a) && ft_lstsize(data->stack_b) != 0)
            push(&data->stack_b, &data->stack_a, "pa\n");
        else
            x = if_sorted(data->stack_a);
    }
}