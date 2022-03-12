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
    A_BEFORE
    sorting(&data);
    A_AFTER
    B_AFTER

    // // ***********************************/
    // // * Print Linked list
    // // *******************************
    // if (data.lst_stack_a)
    // {
    //     t_stack *head = data.lst_stack_a;
    //     printf("---------------------------------\n%d - ", head->value);
    //     data.lst_stack_a = data.lst_stack_a->next;
    //     while (data.lst_stack_a != head)
    //     {
    //         printf("%d - ", data.lst_stack_a->value);
    //         data.lst_stack_a = data.lst_stack_a->next;
    //     }
    //     printf("*****\n");
    //     data.lst_stack_a = data.lst_stack_a->previous;
    //     while (data.lst_stack_a != head)
    //     {
    //         printf("%d\n", data.lst_stack_a->value);
    //         data.lst_stack_a = data.lst_stack_a->previous;
    //     }
    //     printf("%d\n", data.lst_stack_a->value);
    //     printf("*****\n");
    //     printf ("%d\n", return_last(data.lst_stack_a)->value);
    // }
    // printf("\n");
    // system("leaks push_swap");
    return (0);
}











    // insert(&data);
    // free(data.stack_a);
    


    ///*************************
    // free function
    //**************************
    // int x;
    // x = 0;
    // // while (data.lines_tab[x])
    // // {
    // //     free(data.lines_tab[x]);
    // //     x++;
    // // }
    // // free(data.lines_tab);
    // data.lst_stack_a->next = NULL;
    // data.lst_stack_a = NULL;
    // data.b = NULL;
