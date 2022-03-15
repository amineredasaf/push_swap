#include "../push_swap.h"

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