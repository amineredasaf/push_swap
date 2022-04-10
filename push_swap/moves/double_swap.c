/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 06:49:26 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/05 06:49:44 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	double_swap(t_data *data, char *move)
{
	swap(data->stack_a, NULL);
	swap(data->stack_b, NULL);
	ft_putstr(move);
}
