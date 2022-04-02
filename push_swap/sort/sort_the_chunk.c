/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_the_chunk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:27:42 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/02 12:27:44 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	optimize_a_and_b(t_data **data, int size)
{
	if ((*data)->stack_a && (*data)->stack_a->pos > size)
		double_rotate(*data);
	else
		rotate(&(*data)->stack_b, "rb\n");
}

void	sort_the_chunk(t_data **data, int size)
{
	t_stack	*tmp;

	tmp = (*data)->stack_a;
	while (tmp->next != NULL)
	{
		if (tmp->pos <= size)
		{
			while (tmp->value != (*data)->stack_a->value)
			{
				if (find_idx(tmp, tmp->pos) <= size + 1 / 2)
					rotate(&(*data)->stack_a, "ra\n");
				else
					reverse_rotate(&(*data)->stack_a, "rra\n");
			}
			push(&(*data)->stack_a, &(*data)->stack_b, "pb\n");
			if ((*data)->stack_b && (*data)->stack_b->pos > size - 10)
				optimize_a_and_b(data, size);
			tmp = (*data)->stack_a;
		}
		else
			tmp = tmp->next;
	}
}
