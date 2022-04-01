/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   top_compare.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 23:55:30 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 23:55:33 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

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
