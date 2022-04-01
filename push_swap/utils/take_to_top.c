/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_to_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 23:40:45 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 23:40:53 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	take_to_top(t_stack **stack, int pos)
{
	while (stack && (*stack)->pos != pos)
	{
		if ((find_idx(*stack, pos)) >= (ft_lstsize(*stack) / 2))
			reverse_rotate(&(*stack), "rrb\n");
		else
			rotate(&(*stack), "rb\n");
	}
}
