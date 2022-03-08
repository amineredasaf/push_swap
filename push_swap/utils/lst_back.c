#include "../push_swap.h"

void	add_back(t_stack **lst, t_stack *new)
{
	t_stack	*head;
	t_stack *tail;

	if (*lst == NULL)
	{
		new->previous = new;
		new->next = new;
		*lst = new;
	}
	else
	{		
		head = *lst;
		tail = (*lst)->next;
		while (tail->next != head)
			tail = tail->next;
		new->next = head;
		new->previous = tail;
		tail->next = new;
		head->previous = new;
	}
}