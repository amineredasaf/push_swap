/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:20:39 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 20:25:08 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	sort_circle(t_data *data)
{
	int	x;
	int	len;

	x = 0;
	len = ft_lstsize(data->stack_a);
	while (x++ < len / 3)
		push(&data->stack_a, &data->stack_b, "pb\n");
	rotate(&data->stack_a, "ra\n");
	sort_five(data);
}

void	sort_five(t_data *data)
{
	int	x;
	int	current;
	int	next;
	int	tail;

	x = if_circle(data->stack_a);
	if (x == 1)
		sort_circle(data);
	else
	{
		while (x != SORTED)
		{
			current = data->stack_a->value;
			next = data->stack_a->next->value;
			tail = find_last_value(data->stack_a);
			if (current > next && current < tail)
				swap(data->stack_a, "sa\n");
			else if (current < next && current < tail
				&& !if_sorted(data->stack_a))
				push(&data->stack_a, &data->stack_b, "pb\n");
			else if (current > next && current > tail)
				rotate(&data->stack_a, "ra\n");
			else if (current < next && current > tail)
				reverse_rotate(&data->stack_a, "rra\n");
			else if (current < next && current < tail
				&& if_sorted(data->stack_a) && ft_lstsize(data->stack_b) != 0)
				push(&data->stack_b, &data->stack_a, "pa\n");
			else
				x = if_sorted(data->stack_a);
		}
	}
}
