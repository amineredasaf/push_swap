/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_circle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:44:06 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/02 12:44:08 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	sort_circle(t_data *data)
{
	int	x;
	int	len;

	x = 0;
	len = ft_lstsize(data->stack_a);
	while (x++ < len / 3)
		push(&data->stack_a, &data->stack_b, "pb\n");
	rotate(&data->stack_a, "ra\n");
	sort_five(data);
}
