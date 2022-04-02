#include "../push_swap.h"

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