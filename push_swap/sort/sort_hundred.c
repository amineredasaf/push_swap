/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:25:44 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 20:33:15 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

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
			{
				if ((*data)->stack_a && (*data)->stack_a->pos > size)
					double_rotate(*data);
				else
					rotate(&(*data)->stack_b, "rb\n");
			}
			tmp = (*data)->stack_a;
		}
		else
			tmp = tmp->next;
	}
}

void	push_chunks(t_data *data, int chunk)
{
	int	size;
	int	ssize;
	int	idx;

	ssize = 0;
	size = ft_lstsize(data->stack_a) / chunk;
	idx = 0;
	ssize += size;
	while (idx < chunk)
	{
		if (idx == 0)
			sort_the_chunk(&data, ssize);
		else
		{
			ssize += size;
			sort_the_chunk(&data, ssize);
		}
		idx++;
	}
	push(&data->stack_a, &data->stack_b, "pb\n");
}

int	top_compare(t_stack *stack, int pos)
{
	int	top;
	int	tail;

	top = find_idx(stack, pos);
	tail = ft_lstsize(stack) - top;
	if (top >= tail)
		return (tail);
	else
		return (top);
}

void	sort_hundred(t_data *data, int chunk)
{
	t_stack	*head;
	t_stack	*tmp;
	int		ssize;

	ssize = ft_lstsize(data->stack_a) - 1;
	head = data->stack_a;
	tmp = data->stack_b;
	push_chunks(data, chunk);
	while ((*data).stack_b && ssize >= 0)
	{
		if (ssize == 0
			|| top_compare(data->stack_b, ssize)
			< top_compare(data->stack_b, ssize - 1))
		{
			take_to_top(&data->stack_b, ssize);
			push(&data->stack_b, &data->stack_a, "pa\n");
			ssize--;
		}
		else
		{
			take_to_top(&data->stack_b, ssize - 1);
			push(&data->stack_b, &data->stack_a, "pa\n");
			take_to_top(&data->stack_b, ssize);
			push(&data->stack_b, &data->stack_a, "pa\n");
			swap(data->stack_a, "sa\n");
			ssize -= 2;
		}
	}
}
