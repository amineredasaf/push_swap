#include "../push_swap.h"

void    rotate(t_stack **stack, char *move)
{

    t_stack *head;

    if ((*stack)->previous)
    {
        head = (*stack);
        (*stack) = (*stack)->next;
        (*stack)->previous = head;
    }
    ft_putstr(move);
}