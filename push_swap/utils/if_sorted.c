#include "../push_swap.h"

int	if_sorted(t_stack *stack)
{
	t_stack	*tmp;
	int		x;

	x = 0;
	tmp = stack;
	while (tmp->next)
	{
		if (tmp && tmp->next && tmp->value > tmp->next->value)
			return (NOT_SORTED);
		tmp = tmp->next;
	}
	return (SORTED);
}