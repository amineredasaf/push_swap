/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_doub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 19:54:12 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 19:55:32 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	check_doub(t_data *data)
{
	int		x;
	int		y;
	t_stack	*tmp;
	t_stack	*reset;

	x = 0;
	y = 0;
	reset = data->stack_a;
	tmp = data->stack_a->next;
	data->lst_len = ft_lstsize(data->stack_a);
	while (x < data->lst_len)
	{
		y = x + 1;
		tmp = data->stack_a->next;
		while (y < data->lst_len)
		{
			if (data->stack_a->value == tmp->value)
				ft_error("Error\n", data);
			tmp = tmp->next;
			y++;
		}
		x++;
		data->stack_a = data->stack_a->next;
	}
	data->stack_a = reset;
}
