/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_rrotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 06:48:55 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/05 06:49:16 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	double_rrotate(t_data *data, char *move)
{
	reverse_rotate(&data->stack_a, NULL);
	reverse_rotate(&data->stack_b, NULL);
	ft_putstr(move);
}
