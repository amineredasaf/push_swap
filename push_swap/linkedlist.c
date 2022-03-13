#include "push_swap.h"

int main()
{
    int tab[] = {1, 8, 3};
    t_stack *A;
    int     i;

    i = 2;
    A = NULL;
    while(i)
    {
        add_back(&A, lstnew(tab[i]));
        i--;
//     }
//     printf("%d\n", A->stack);
//     A = A->next;
//     printf("%d\n", A->stack);
//     A = A->previous;
//     printf("%d\n", A->stack);
//     return 0;
}