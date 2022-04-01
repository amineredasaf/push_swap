/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:45:20 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 18:46:57 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	reverse_rotate(t_stack **stack, char *move)
{
	t_stack	*head;
	t_stack	*tail;

	if ((*stack)->next)
	{
		head = (*stack);
		tail = find_last_stack(*stack);
		head->previous = tail;
		tail->next = head;
		tail->previous->next = NULL;
		tail->previous = NULL;
		(*stack) = tail;
	}
	ft_putstr(move);
}
