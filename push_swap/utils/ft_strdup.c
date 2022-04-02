#include "../push_swap.h"

char	*ft_dup(char *dest)
{
	dest = (char *)malloc(sizeof(char *) * 1);
	if (!dest)
		ft_error("[0014] Error : GNL Malloc Error\n");
	dest[0] = '\0';
	return (dest);
}