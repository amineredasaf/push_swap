#include "../push_swap.h"

void	add_back(t_stack **lst, t_stack *new)
{
	PRINT_FUNC
	t_stack	*head;
	t_stack	*next;
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
		next = (*lst)->next;
		tail = *lst;
		while (tail->next != head)
			tail = tail->next;
		new->next = head;
		new->previous = tail;
		tail->next = new;
		head->previous = new;
	}
}