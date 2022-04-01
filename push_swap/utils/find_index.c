/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 19:20:23 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 19:43:15 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

int	find_idx(t_stack *stack, int pos)
{
	t_stack	*tmp;
	int		idx;

	tmp = stack;
	idx = 0;
	while (tmp)
	{
		if (tmp->pos == pos)
			return (idx);
		idx++;
		tmp = tmp->next;
	}
	return (-1);
}
