#include "../push_swap.h"

void ft_check(t_data *data)
{
    char *move;

    move = get
}

int	main(int ac, char **av)
{
	t_data	data;

	if (ac <= 1)
		ft_error(NULL);
	data.arg_nb = ac;
	data.av = av;
	parsing(&data);
    ft_check(&data);
	lst_free(&data.stack_a);
	free(data.stack_a);
	lst_free(&data.stack_b);
	free(data.stack_b);
	return (0);
}