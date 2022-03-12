#include "../push_swap.h"

void	add_front(t_stack **lst, t_stack *new)
{
    t_stack *tail;

    tail = (*lst)->previous;
	if (lst && new)
	{
		new->next = *lst;
        new->previous = (*lst)->previous;
		*lst = new;
	}
}