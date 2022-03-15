#include "../push_swap.h"

void    reverse_rotate(t_stack **stack, char *move)
{

    t_stack *head;

    if ((*stack)->previous)
    {
        head = (*stack);
        (*stack) = (*stack)->previous;
        (*stack)->next = head;
    }
    ft_putstr(move);
}