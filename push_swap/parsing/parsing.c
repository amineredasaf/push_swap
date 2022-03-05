#include "../push_swap.h"

void parsing(t_data *data)
{
    to_string(data);
    check_char(data);
    to_splitted(data);
    to_intgers(data);
    check_doub(data);
}