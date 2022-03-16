#include "../push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	int	idx;
	t_stack *head;
	t_stack *tmp;

	idx = 0;
	if (lst == NULL)
		return (0);
	idx++;
	head = lst;
	tmp = lst;
	while (tmp->next != head)
	{
		idx++;
		tmp = tmp->next;
	}
	return (idx);
}