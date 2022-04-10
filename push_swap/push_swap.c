/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:12:39 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 20:14:03 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data	data;

	data.av = NULL;
	if (ac <= 1)
		ft_error(NULL, NULL);
	else
	{
		data.arg_nb = ac;
		data.av = av;
		parsing(&data);
		sorting(&data);
		lst_free(&data.stack_a);
		free(data.stack_a);
		lst_free(&data.stack_b);
		free(data.stack_b);
	}
	return (0);
}
