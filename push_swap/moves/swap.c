#include "../push_swap.h"

void    swap(t_stack *stack, char *move)
{
    int     tmp;

    if (stack->next)
    {
        tmp = stack->value;
        stack->value = stack->next->value;
        stack->next->value = tmp;
    }
    ft_putstr(move);
}