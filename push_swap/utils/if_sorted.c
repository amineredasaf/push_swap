/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:38:05 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/02 17:38:07 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
