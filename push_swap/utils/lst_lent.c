#include "../push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	int	idx;

	idx = 0;
	while (lst)
	{
		idx++;
		lst = lst-> next;
	}
	return (idx);
}