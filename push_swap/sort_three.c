#include "push_swap.h"

void    swap(t_stack *stack, char *move)
{
    int     tmp;
    if (stack == NULL)
    {
        ft_putstr("NULL PARAM in ");
        ft_putstr((char *)__func__);
        ft_putstr("\n");
        exit (1);
    }
    if (stack->next)
    {
        tmp = stack->value;
        stack->value = stack->next->value;
        stack->next->value = tmp;
    }
    else
    {
        ft_putstr("swap :: stack have less then two elems\n");
        exit (1);
    }
    ft_putstr(move);
}

void    rotate(t_stack *stack, char *move)
{
    int tmp;
    if (stack->previous)
    {
        tmp = stack->value;
        stack->value = stack->next->value;
        stack->next->value = stack->previous->value;
        stack->previous->value = tmp;
    }
    ft_putstr(move);
}

void    reverse_rotate(t_stack *stack, char *move)
{
    int tmp;

    if (stack->previous)
    {
        tmp = stack->previous->value;
        stack->previous->value = stack->next->value;
        stack->next->value = stack->value;
        stack->value = tmp;
    }
    ft_putstr(move);
}

void    push(t_stack *from_stack, t_stack *to_stack, char *move)
{
    int tmp;

    if (to_stack == NULL)
        add_back(to_stack, from_stack->previous);
}

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

    x = 1;
    next = 0;
    now = 0;
    head = data->lst_stack_a;
    while (x != SORTED)
    {
        next = data->lst_stack_a->next->value;
        prev = data->lst_stack_a->previous->value;
        now = data->lst_stack_a->value;
        if (now > next && now < prev)
            swap(data->lst_stack_a, "sa\n");
        else if (now > next && next > prev)
            rotate(data->lst_stack_a, "ra\n");
        else if (now > next && next < prev)
            rotate(data->lst_stack_a, "ra\n");
        else if (now < next && now < prev && next > prev)
            swap(data->lst_stack_a, "sa\n");
        else if (now < next && now > prev)
            reverse_rotate(data->lst_stack_a, "rra\n");
        else
            x = if_sorted(data);
    }
}



// is_circle() ?? to do
// sort_circle
// void sort_three(t_stack *stack)
// {
    // 1 3 2 // is sorted circle == false  ==> swap

   //  3 1 2 // is sorted circle == true  ==> ra / rra
    // 1 2 3 // sorted

    // 3 2 1 // is sorted circle == false  ==> swap

    // 2 3 1 // is sorted circle == true  ==> ra / rra
    // 1 2 3 // sorted
// }