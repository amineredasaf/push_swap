/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_lent.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 19:50:46 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 19:51:20 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	int		idx;
	t_stack	*tmp;

	idx = 0;
	if (lst == NULL)
		return (0);
	tmp = lst;
	while (tmp)
	{
		idx++;
		tmp = tmp->next;
	}
	return (idx);
}
