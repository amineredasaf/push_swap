/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 19:46:39 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 19:47:05 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	add_back(t_stack **lst, t_stack *new)
{
	t_stack	*head;
	t_stack	*next;
	t_stack	*tail;

	if (*lst == NULL)
	{
		new->previous = NULL;
		new->next = NULL;
		*lst = new;
	}
	else
	{		
		head = *lst;
		next = (*lst)->next;
		tail = *lst;
		while (tail->next != NULL)
			tail = tail->next;
		new->previous = tail;
		tail->next = new;
		new->next = NULL;
		head->previous = NULL;
	}
}
