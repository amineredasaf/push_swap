#include "../push_swap.h"

void	add_front(t_stack **lst, t_stack *new)
{
	t_stack	*head;
	t_stack	*next;
	t_stack *tail;


	if (!new)
		exit (1);
	if (*lst == NULL)
	{
		new->next = new; 
		new->previous = new;
		*lst = new; 
	}
	else
	{
		head = *lst;
		next = (*lst)->next;
		tail = (*lst)->previous;
		while (tail->next != head)
			tail = tail->next;
		new->next = *lst;
        new->previous = tail;
		(*lst)->previous = new; 
		tail->next = new;
		*lst = new;
	}
}