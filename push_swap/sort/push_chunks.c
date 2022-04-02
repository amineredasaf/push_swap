/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_chunks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:27:26 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/02 12:27:29 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

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
