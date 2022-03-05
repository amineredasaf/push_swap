#include "../push_swap.h"

void	add_back(t_stack **lst, t_stack *new)
{
	t_stack	*tmp;

	printf("here\n");
	tmp = NULL;
	if (*lst == NULL)
	{
		*lst = new;
		new->next = NULL;
	}
	else
	{		
		tmp = *lst;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
		new->next = NULL;
	}
}