#include "../push_swap.h"

t_stack	*lstnew(int content)
{
	t_stack	*head;

	head = (t_stack *)malloc(sizeof(t_stack));
	if (head == NULL)
		return (NULL);
	head->stack = content;
	head->next = NULL;
    head->previous = NULL;
	return (head);
}