#include "push_swap.h"

t_stack *return_last(t_stack *head)
{
    return (head->previous);
}

int main(int ac, char **av)
{
    t_data data;

    if (ac <= 1)
        ft_error("Error : Not enough input arguments\n");
    data.arg_nb = ac;
    data.av = av;
    parsing(&data);
    // insert(&data);
    // free(data.stack_a);
    



    // free function
    // int x;
    // x = 0;
    // // while (data.lines_tab[x])
    // // {
    // //     free(data.lines_tab[x]);
    // //     x++;
    // // }
    // // free(data.lines_tab);
    // data.a->next = NULL;
    // data.a = NULL;
    // data.b = NULL;

    // if (data.a)
    // {
    //     t_stack *head = data.a;
    //     printf("%d\n", head->stack);
    //     data.a = data.a->next;
    //     while (data.a != head)
    //     {
    //         printf("%d\n", data.a->stack);
    //         data.a = data.a->next;
    //     }
    //     printf("*****\n");
    //     data.a = data.a->previous;
    //     while (data.a != head)
    //     {
    //         printf("%d\n", data.a->stack);
    //         data.a = data.a->previous;
    //     }
    //     printf("%d\n", data.a->stack);
    //     printf("*****\n");
    //     printf ("%d\n", return_last(data.a)->stack);
    // }
    
    // system("leaks push_swap");
    return (0);
}