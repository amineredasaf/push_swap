/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 19:45:46 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/01 19:45:51 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

int	ft_countr(const char *s, char c)
{
	int	idx;
	int	word;

	word = 0;
	idx = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] != c && (s[idx + 1] == c || s[idx + 1] == '\0'))
			word++;
		idx++;
	}
	return (word);
}

char	*ft_addwords(char *dest, const char *s, int len)
{
	int	idx;

	idx = 0;
	while (idx < len)
	{
		dest[idx] = s[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

void	ft_move2tab(char **dest, const char *s, char sep)
{
	int	len;
	int	idx;
	int	word;

	len = 0;
	idx = 0;
	word = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] == sep)
			idx++;
		else
		{
			len = 0;
			while (s[idx + len] != sep && s[idx + len] != '\0')
				len++;
			dest[word] = malloc(sizeof(char) * (len + 1));
			if (dest[word] == NULL)
				exit (1);
			ft_addwords(dest[word], &s[idx], len);
			idx = idx + len;
			word++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	int		word;
	char	**tab;

	if (!s)
		return (NULL);
	word = ft_countr(s, c);
	tab = malloc(sizeof(char *) * (word + 1));
	if (!tab)
		exit(1);
	tab[word] = 0;
	ft_move2tab(tab, s, c);
	return (tab);
}
