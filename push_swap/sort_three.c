#include "push_swap.h"

void sa(t_data *data, char *move)
{
    t_stack *tmp;

    tmp = data->lst_stack_a;
    data->lst_stack_a = data->lst_stack_a->next;
    data->lst_stack_a->next = tmp;
    data->lst_stack_a->previous = tmp->previous;
    ft_putstr(move);
}

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

void ra(t_data *data, char *move)
{
    t_stack *tmp;
    t_stack *head;
    t_stack *tail;

    tmp = data->lst_stack_a;
    head = data->lst_stack_a;
    tail = data->lst_stack_a->previous;

    data->lst_stack_a->previous = head;
    data->lst_stack_a = data->lst_stack_a->next;
    data->lst_stack_a->next = tail;
    ft_putstr(move);
    // printf("[head is %d][next is %d][tail is %d]\n",data->lst_stack_a->value, data->lst_stack_a->next->value, data->lst_stack_a->previous->value);
    
}

// void rra(t_data *data, char *move)
// {
    
// }

void    sort_two(t_stack *stack)
{
    if (stack->next->value < stack->value)
        swap(stack, "sa\n");
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

// void sort_three(t_data *data)
// {
//     t_stack *head;
//     int x;
//     int next;
//     int now;
//     int prev;

//     x = 1;
//     next = 0;
//     now = 0;
//     head = data->lst_stack_a;
//     // ft_putstr("Was Here\n");
//     // printf("lent here is %d\n", data->lst_len);
//     while (x != SORTED)
//     {
//         // printf("now = %d next = %d\n", now, next);
//         next = data->lst_stack_a->next->value;
//         prev = data->lst_stack_a->previous->value;
//         now = data->lst_stack_a->value;
//         // x = if_sorted(data);
//         printf("[head is %d][next is %d][tail is %d]\n",data->lst_stack_a->value, data->lst_stack_a->next->value, data->lst_stack_a->previous->value);
//         if (now > next && next < prev)
//             swap(data->lst_stack_a, "sa\n");
//         else if (now > next && next > prev)
//             ra(data, "ra\n");
//         else if (now < next && next > prev)
//             swap(data->lst_stack_a, "sa\n");
//         else
//             x = if_sorted(data);
//     }
// }