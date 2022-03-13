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

void    rotate(t_stack **stack, char *move)
{
    t_stack *head;

    if ((*stack)->previous)
    {
        head = (*stack);
        (*stack) = (*stack)->next;
        (*stack)->previous = head;
    }
    printstack(*stack, __func__, 1, "a");
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

void    push(t_stack **from_stack, t_stack **to_stack, char *move)
{
    t_stack *head;
    t_stack *tail;
    t_stack *next;

    head = (*from_stack);
    next = (*from_stack)->next;
    tail = (*from_stack)->previous;
    if (!*to_stack && from_stack)
    {
        *to_stack = head;
        (*to_stack)->next = head;
        (*to_stack)->previous = head;
        
        (*from_stack) = next;
        (tail)->next = *from_stack;
        (*from_stack)->previous = tail;
    }
    else if (to_stack && from_stack && ((*from_stack) != (*from_stack)->previous))
    {
        add_front(to_stack, *from_stack);

        (*from_stack) = next;
        (tail)->next = *from_stack;
        (*from_stack)->previous = tail;
    }
    else if (from_stack && to_stack && ((*from_stack) == (*from_stack)->previous))
    {
        add_front(to_stack, *from_stack);
        (*from_stack) = NULL;
    }
    ft_putstr(move);
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
            reverse_rotate(data->stack_a, "rra\n");
        else
            x = if_sorted(data);
    }
}

void   sort_five(t_data *data)
{
    int x;
    int y;
    int next;
    int now;
    int tail;
    t_stack  *head;

    x = 1;
    y = 0;
    next = 0;
    now = 0;
    tail = 0;
    head = data->stack_a;
    // while (x != SORTED)
    // {
        // printf("x = %x - now = %d -- next == %d -- tail = %d\n", x, now, next, tail);
        next = data->stack_a->next->value;
        tail = data->stack_a->previous->value;
        now = data->stack_a->value;

        // A_AFTER
        // B_AFTER
        if (now > next && now < tail)
        {
            printf ("con 1\n");
            swap(data->stack_a, "sa\n");
            // printstack(data->stack_a, __func__, 1, "a");
            // printstack(data->stack_b, __func__, 1, "b");
        }
        else if (now < next && now < tail)
        {
            printf ("con 2\n");
            push(&data->stack_a, &data->stack_b, "pb\n");
            // printstack(data->stack_a, __func__, 1, "a");
            // printstack(data->stack_b, __func__, 1, "b");
        }
        else if (now > tail && now < next)
        {
            printf ("\n\n------> con 3\n\n");
            rotate(&data->stack_a, "rra\n");
            // printstack(data->stack_a, __func__, 1, "a");
            // printstack(data->stack_b, __func__, 1, "b");
        }
        else if (x == SORTED || data->stack_b != NULL)
        {
            printf ("con 4\n");
            push(&data->stack_b, &data->stack_a, "pa\n");
            // printstack(data->stack_a, __func__, 1, "a");
            // printstack(data->stack_b, __func__, 1, "b");
        }
        else
        {
            printf ("else\n");
            // printstack(data->stack_a, __func__, 1, "a");
            // printstack(data->stack_b, __func__, 1, "b");
            x = if_sorted(data);
        }
    // }
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

//  2 1 4 5 3 --  1 2 4 5 3 -- [1] 2 4 5 3 --  [1 2] 4 5 3 -- [1 2] 3 4 5 -- [1] 2 3 4 5 -- -- 2 3 4 5 1 -- 1 2 3 4 5
//     base          sa             pb              pb          ra              pa              ra          pa          ra
//  2 1 4 5 3 --  1 2 4 5 3 -- [1] 2 4 5 3 --  [1 2] 4 5 3 -- [1 2] 5 3 4 -- [1 2] 3 4 5 -- 3 4 5 2 -- 2 3 4 5 -- 2 3 4 5 1 -- 1 2 3 4 5  
//     base          sa             pb              pb          rra             rra         pa          ra          pa          ra
// 4 1 5 2 3 -- 1 5 2 3 4 -- [1] 5 2 3 4 -- 2 3 4 5 -- 1 2 3 4 5
