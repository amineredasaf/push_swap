#include "../push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	int	idx;
	t_stack *head;

	idx = 0;
	if (lst == NULL)
		return (0);
	idx++;
	head = lst;
	lst = lst->next;
	while (lst != head)
	{
		idx++;
		lst = lst->next;
	}
	return (idx);
}