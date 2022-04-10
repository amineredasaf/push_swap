/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:37:39 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/02 17:37:41 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

char	*ft_dup(char *dest)
{
	dest = (char *)malloc(sizeof(char *) * 1);
	if (!dest)
		ft_error("[0014] Error : GNL Malloc Error\n", NULL);
	dest[0] = '\0';
	return (dest);
}
