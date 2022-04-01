/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_front.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 19:47:16 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 19:49:51 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	add_front(t_stack **lst, t_stack *new)
{
	t_stack	*tail;

	if (!new)
		exit (1);
	if (lst && *lst == NULL)
	{
		new->next = new;
		new->previous = NULL;
		*lst = new;
	}
	else
	{
		tail = find_last_stack(*lst);
		new->next = *lst;
		new->previous = NULL;
		(*lst)->previous = new;
		tail->next = NULL;
		*lst = new;
	}
}
