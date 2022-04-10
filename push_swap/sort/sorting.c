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

void	sorting(t_data *data)
{
	int		state;

	state = if_sorted(data->stack_a);
	if (state == SORTED)
		ft_error(NULL, NULL);
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
		else
			sort_hundred(data, 10);
	}
}
