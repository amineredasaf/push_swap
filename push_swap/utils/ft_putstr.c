/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 22:54:23 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 22:54:33 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	ft_putstr(char *str)
{
	int	idx;

	idx = 0;
	while (str && str[idx])
	{
		write(1, &str[idx], 1);
		idx++;
	}
}