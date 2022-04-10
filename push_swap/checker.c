/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:33:26 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/05 03:01:15 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	append_da_move(t_data *data, char *move)
{
	if (data->stack_a && ft_strcmp(move, "sa\n") == 0)
		swap(data->stack_a, NULL);
	else if (data->stack_b && ft_strcmp(move, "sb\n") == 0)
		swap(data->stack_b, NULL);
	else if (data->stack_a && ft_strcmp(move, "ra\n") == 0)
		rotate(&data->stack_a, NULL);
	else if (data->stack_b && ft_strcmp(move, "rb\n") == 0)
		rotate(&data->stack_b, NULL);
	else if (data->stack_a && data->stack_b && ft_strcmp(move, "rr\n") == 0)
		double_rotate(data, NULL);
	else if (data->stack_a && data->stack_b && ft_strcmp(move, "rrr\n") == 0)
		double_rrotate(data, NULL);
	else if (data->stack_a && ft_strcmp(move, "pb\n") == 0)
		push(&data->stack_a, &data->stack_b, NULL);
	else if (data->stack_b && ft_strcmp(move, "pa\n") == 0)
		push(&data->stack_b, &data->stack_a, NULL);
	else if (data->stack_a && ft_strcmp(move, "rra\n") == 0)
		reverse_rotate(&data->stack_a, NULL);
	else if (data->stack_b && ft_strcmp(move, "rrb\n") == 0)
		reverse_rotate(&data->stack_b, NULL);
	else if (data->stack_b && ft_strcmp(move, "ss\n") == 0)
		double_swap(data, NULL);
	else
		return ;
}

void	check_da_move(char *move, t_data *data)
{
	if (ft_strcmp(move, "sa\n") == 0 || ft_strcmp(move, "sb\n") == 0)
		return ;
	else if (ft_strcmp(move, "ra\n") == 0 || ft_strcmp(move, "rb\n") == 0)
		return ;
	else if (ft_strcmp(move, "rr\n") == 0 || ft_strcmp(move, "rrr\n") == 0)
		return ;
	else if (ft_strcmp(move, "pa\n") == 0 || ft_strcmp(move, "pb\n") == 0)
		return ;
	else if (ft_strcmp(move, "rra\n") == 0 || ft_strcmp(move, "rrb\n") == 0)
		return ;
	else if (ft_strcmp(move, "ss\n") == 0)
		return ;
	else
		ft_error("Error\n", data);
}

void	ft_check(t_data *data)
{
	char	*move;

	move = NULL;
	move = get_next_line(0);
	while (move != NULL)
	{
		check_da_move(move, data);
		append_da_move(data, move);
		free(move);
		move = get_next_line(0);
	}
}

int	main(int ac, char **av)
{
	t_data	data;
	int		x;

	x = 0;
	if (ac <= 1)
		ft_error(NULL, NULL);
	data.arg_nb = ac;
	data.av = av;
	parsing(&data);
	ft_check(&data);
	x = if_sorted(data.stack_a);
	if (x == SORTED && !data.stack_b)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	lst_free(&data.stack_a);
	free(data.stack_a);
	lst_free(&data.stack_b);
	free(data.stack_b);
	return (0);
}
