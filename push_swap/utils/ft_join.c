/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 19:45:12 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 19:45:31 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

char	*ft_dup(char *dest)
{
	dest = (char *)malloc(sizeof(char *) * 1);
	if (!dest)
		ft_error("[0014] Error : GNL Malloc Error\n");
	dest[0] = '\0';
	return (dest);
}

char	*ft_strjoin(char *dest, char *buff)
{
	char	*ptr;
	int		idx;
	int		i;

	if (!dest)
		dest = ft_dup(dest);
	if (!buff)
		return (NULL);
	idx = -1;
	i = 0;
	ptr = malloc(sizeof(char) * (ft_strlen(buff) + ft_strlen(dest) + 2));
	if (!ptr)
		ft_error("[0014] Error : GNL Malloc Error\n");
	if (dest)
		while (dest[++idx])
			ptr[idx] = dest[idx];
	while (buff[i])
		ptr[idx++] = buff[i++];
	ptr[idx] = ' ';
	ptr[idx + 1] = '\0';
	free(dest);
	return (ptr);
}

size_t	ft_strlen(const char *str)
{
	size_t	len;

	if (!str || !str[0])
		return (0);
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
