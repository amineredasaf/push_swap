/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 19:53:11 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 19:54:02 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

int	ft_isdigit(int ch)
{
	if ((ch >= '0' && ch <= '9') || ch == ' ' || ch == '-' || ch == '+')
	{
		return (0);
	}
	return (1);
}

void	check_char(t_data *data)
{
	int	y;

	y = 0;
	while (data->line[y])
	{
		if ((data->line[y] == '-' && data->line[y + 1] == ' ')
			|| (data->line[y] == '+' && data->line[y + 1] == ' ')
			|| (ft_isdigit(data->line[y]))
			|| (!ft_isdigit(data->line[y] && data->line[y + 1] == '+'))
			|| (!ft_isdigit(data->line[y] && data->line[y + 1] == '-'))
			|| (data->line[y] == '-' && data->line[y + 1] == '-')
			|| (data->line[y] == '+' && data->line[y + 1] == '+'))
		{
			free(data->line);
			ft_error("Error\n", NULL);
		}
		y++;
	}
}
