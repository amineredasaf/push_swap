#include "../push_swap.h"

t_stack	*lstnew(int content)
{
	PRINT_FUNC
	t_stack	*head;

	head = (t_stack *)malloc(sizeof(t_stack));
	if (head == NULL)
		return (NULL);
	head->value = content;
	head->next = NULL;
    head->previous = NULL;
	return (head);
}