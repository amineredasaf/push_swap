#include "../push_swap.h"

int	ft_isdigit(int ch)
{
    PRINT_FUNC
	if ((ch >= '0' && ch <= '9') || ch == ' ' || ch == '-' || ch == '+')
	{
		return (0);
	}
	return (1);
}

void check_char(t_data *data)
{
    PRINT_FUNC
    int y;

    y = 0;
    while(data->line[y])
    {
        if ((ft_isdigit(data->line[y])))
            ft_error("Error : Character Found\n");
        y++;
    }
}