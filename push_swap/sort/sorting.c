/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:37:13 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 20:39:38 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

// int	if_sorted(t_stack *stack)
// {
// 	t_stack	*tmp;
// 	int		x;

// 	x = 0;
// 	tmp = stack;
// 	while (tmp->next)
// 	{
// 		if (tmp && tmp->next && tmp->value > tmp->next->value)
// 			return (NOT_SORTED);
// 		tmp = tmp->next;
// 	}
// 	return (SORTED);
// }

void	sorting(t_data *data)
{
	int		state;
	t_stack	*head;

	head = data->stack_a;
	state = if_sorted(data->stack_a);
	if (state == SORTED)
		ft_error(NULL);
	else
	{
		if (data->lst_len == 2)
			sort_two(data->stack_a);
		else if (data->lst_len == 3)
			sort_three(data);
		else if (data->lst_len <= 30)
			sort_five(data);
		else if (data->lst_len <= 100)
			sort_hundred(data, 5);
		else if (data->lst_len <= 600)
			sort_hundred(data, 10);
	}
}
