/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 19:17:01 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 19:18:19 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	rotate(t_stack **stack, char *move)
{
	t_stack	*head;
	t_stack	*tail;

	if ((*stack)->next)
	{
		head = (*stack);
		tail = (*stack);
		while (tail->next != NULL)
			tail = tail->next;
		(*stack) = (*stack)->next;
		(*stack)->previous = NULL;
		head->previous = tail;
		head->next = NULL;
		tail->next = head;
	}
	ft_putstr(move);
}
