/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:12:22 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 18:14:49 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	push_last(t_stack **from_stack, t_stack **to_stack)
{
	add_front(to_stack, *from_stack);
	(*from_stack) = NULL;
}

void	push(t_stack **from_stack, t_stack **to_stack, char *move)
{
	t_stack	*tail;
	t_stack	*next;

	next = (*from_stack)->next;
	tail = find_last_stack(*from_stack);
	if (!*to_stack && from_stack)
	{
		*to_stack = (*from_stack);
		(*to_stack)->next = NULL;
		(*to_stack)->previous = NULL;
		(*from_stack) = next;
		(tail)->next = NULL;
		(*from_stack)->previous = NULL;
	}
	else if (to_stack && *from_stack && ft_lstsize(*from_stack) > 1)
	{
		add_front(to_stack, *from_stack);
		(*from_stack) = next;
		(tail)->next = NULL;
		(*from_stack)->previous = NULL;
	}
	else if (from_stack && *to_stack)
		push_last(from_stack, to_stack);
	ft_putstr(move);
}
