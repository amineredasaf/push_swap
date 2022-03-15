#include "../push_swap.h"

void	add_front(t_stack **lst, t_stack *new)
{

	if (lst && new)
	{
		new->next = *lst;
        new->previous = (*lst)->previous;
		(*lst)->previous = *lst;
		*lst = new;
	}
}