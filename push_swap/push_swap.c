#include "push_swap.h"
#define WA printstack(data.stack_a, __func__, 0, "A");
#define WB printstack(data.stack_b, __func__, 0, "B");
#define PA push(&data.stack_b, &data.stack_a, "pa\n");
#define PB push(&data.stack_a, &data.stack_b, "pb\n");




int main(int ac, char **av)
{
    t_data data;

    if (ac <= 1)
        ft_error("Error : Not enough input arguments\n");
    data.arg_nb = ac;
    data.av = av;
    parsing(&data);
    sorting(&data);
    return (0);
}