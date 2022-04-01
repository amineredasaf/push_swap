/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:34:32 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 20:36:44 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	sort_two(t_stack *stack)
{
	if (stack->next->value < stack->value)
		swap(stack, "sa\n");
}

void	sort_three(t_data *data)
{
	int		x;
	int		next;
	int		now;
	int		prev;

	x = 0;
	while (x != SORTED)
	{
		next = data->stack_a->next->value;
		prev = find_last_value(data->stack_a);
		now = data->stack_a->value;
		if (now > next && now < prev)
			swap(data->stack_a, "sa\n");
		else if (now > next && next > prev)
			rotate(&data->stack_a, "ra\n");
		else if (now > next && next < prev)
			rotate(&data->stack_a, "ra\n");
		else if (now < next && now < prev && next > prev)
			swap(data->stack_a, "sa\n");
		else if (now < next && now > prev)
			reverse_rotate(&data->stack_a, "rra\n");
		else
			x = if_sorted(data->stack_a);
	}
}
