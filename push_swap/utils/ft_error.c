/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 19:43:43 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 19:44:57 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

int	ft_error(char *str, t_data *data)
{
	if (str != NULL)
		ft_putstr(str);
	if (data != NULL)
	{
		lst_free(&data->stack_a);
		free(data->stack_a);
		lst_free(&data->stack_b);
		free(data->stack_b);
	}
	exit (1);
}
