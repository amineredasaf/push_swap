/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_intgers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:06:36 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 20:10:23 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	free_split(char **tobe_freed)
{
	int	y;

	y = 0;
	while (tobe_freed[y])
	{
		free(tobe_freed[y]);
		y++;
	}
	free(tobe_freed);
}

void	insert_pos(t_data *data)
{
	int		idx;
	t_stack	*tmp;
	t_stack	*head;

	idx = 0;
	head = data->stack_a;
	tmp = data->stack_a;
	while (head)
	{
		tmp = data->stack_a;
		while (tmp)
		{
			if (head->value > tmp->value)
				head->pos++;
			tmp = tmp->next;
		}
		idx++;
		head = head->next;
	}
}

void	to_intgers(t_data *data)
{
	int	y;

	y = 0;
	data->stack_a = NULL;
	data->stack_b = NULL;
	while (data->lines_tab[y])
	{
		add_back(&data->stack_a, lstnew(ft_atoi(data->lines_tab[y])));
		y++;
	}
	insert_pos(data);
	free_split(data->lines_tab);
}
