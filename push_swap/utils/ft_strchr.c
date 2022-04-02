#include "../push_swap.h"

char	*ft_strchr(char *str, int ch)
{
	int	idx;

	idx = 0;
	while (str != NULL && str[idx] != ch)
	{
		if (str[idx] == '\0')
			return (NULL);
		idx++;
	}
	return (&str[idx]);
}