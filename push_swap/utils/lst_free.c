#include "../push_swap.h"

void	lst_free(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (*stack && (*stack)->next)
	{
		tmp = (*stack)->next;
		free(*(stack));
		*stack = tmp;
	}
}