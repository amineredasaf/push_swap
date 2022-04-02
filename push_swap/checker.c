#include "../push_swap.h"

void     append_da_move(t_data *data, char *move)
{
    if (ft_strcmp(move, "sa\n"))
        swap(data->stack_a, NULL);
    else if (ft_strcmp(move, "sb\n"))
        swap(data->stack_b, NULL);
    else if (ft_strcmp(move, "ra\n"))
        rotate(data->stack_a, NULL);
    else if (ft_strcmp(move, "rb\n"))
        rotate(data->stack_b, NULL);
    else if (ft_strcmp(move, "rr\n"))
        double_rotate(data, NULL);
}

void ft_check(t_data *data)
{
    char *move;

    move = get_next_line(0);
    while(move)
    {
        append_da_move(data, move);
        free(move);
        move = get_next_line(0);
    }
    printf("%d->%d->%d", data->stack_a->value);
    data->stack_a = data->stack_a->next;
    printf("%d->%d->%d", data->stack_a->value);
    data->stack_a = data->stack_a->next;
    printf("%d->%d->%d", data->stack_a->value);
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