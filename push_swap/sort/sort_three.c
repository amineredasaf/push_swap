#include "../push_swap.h"

void    sort_two(t_stack *stack)
{

    if (stack->next->value < stack->value)
        swap(stack, "sa\n");
}


void sort_three(t_data *data)
{

    t_stack *head;
    int x;
    int next;
    int now;
    int prev;

    x = 0;
    next = 0;
    now = 0;
    prev = 0;
    head = data->stack_a;
    while (x != SORTED)
    {
        next = data->stack_a->next->value;
        prev = data->stack_a->previous->value;
        now = data->stack_a->value;
        if (now > next && now < prev)
            swap(data->stack_a, "sa\n");
        else if (now > next && next > prev)
            rotate(&data->stack_a, "ra\n");
        else if (now > next && next < prev)
            rotate(&data->stack_a, "ra\n");
        else if (now < next && now < prev && next > prev)
            swap(data->stack_a, "sa\n");
        else if (now < next && now > prev)
            reverse_rotate(&data->stack_a, "rra\n");
        else
            x = if_sorted(data->stack_a);
    }
}

