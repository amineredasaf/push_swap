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

void	lst_free(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (*stack && (*stack)->next)
	{
		tmp = (*stack)->next;
		free(*(stack));
		*stack = tmp;
	}
}

int	main(int ac, char **av)
{
	t_data	data;

	if (ac <= 1)
		ft_error(NULL);
	data.arg_nb = ac;
	data.av = av;
	parsing(&data);
	sorting(&data);
	lst_free(&data.stack_a);
	free(data.stack_a);
	lst_free(&data.stack_b);
	free(data.stack_b);
	return (0);
}
