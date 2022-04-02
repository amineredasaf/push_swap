#include "../push_swap.h"

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1 [i] != '\0' && s2 [i] != '\0' && s1 [i] == s2 [i])
		i++;
	if (s1 == s2)
		j = 0;
	else
		j = s1 [i] - s2 [i];
	return (j);
}