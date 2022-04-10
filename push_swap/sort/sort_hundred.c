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

void	next_before_curr(t_data *data, int ssize)
{
	take_to_top(&data->stack_b, ssize - 1);
	push(&data->stack_b, &data->stack_a, "pa\n");
	take_to_top(&data->stack_b, ssize);
	push(&data->stack_b, &data->stack_a, "pa\n");
	swap(data->stack_a, "sa\n");
}

void	curr_before_next(t_data *data, int ssize)
{
	take_to_top(&data->stack_b, ssize);
	push(&data->stack_b, &data->stack_a, "pa\n");
}

void	sort_hundred(t_data *data, int chunk)
{
	int		ssize;

	ssize = ft_lstsize(data->stack_a) - 1;
	push_chunks(data, chunk);
	while ((*data).stack_b && ssize >= 0)
	{
		if (ssize == 0
			|| top_compare(data->stack_b, ssize)
			< top_compare(data->stack_b, ssize - 1))
		{
			curr_before_next(data, ssize);
			ssize--;
		}
		else
		{
			next_before_curr(data, ssize);
			ssize -= 2;
		}
	}
}
