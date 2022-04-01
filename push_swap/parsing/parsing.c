/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 19:55:43 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 19:56:03 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	parsing(t_data *data)
{
	to_string(data);
	check_char(data);
	to_splitted(data);
	to_intgers(data);
	check_doub(data);
}
