/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:11:06 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 20:11:48 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	to_string(t_data *data)
{
	int	y;

	y = 1;
	while (data->arg_nb > y)
	{
		if (data->av[y][0] == '\0')
			ft_error("Error.\n");
		data->line = ft_strjoin(data->line, data->av[y]);
		y++;
	}
}
