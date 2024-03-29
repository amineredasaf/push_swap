/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:11:48 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 18:12:07 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	double_rotate(t_data *data, char *move)
{
	rotate(&data->stack_a, NULL);
	rotate(&data->stack_b, NULL);
	ft_putstr(move);
}
