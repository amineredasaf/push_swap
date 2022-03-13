#include "push_swap.h"

void printstack(t_stack *stack, const char *function, int act, char *stackname)
{
    t_stack *head;
    t_stack *tmp;

    (void)act;
    if (stack == NULL)
    {
        printf("----------------------------------------------------------\n");
        printf("|   The Stack [\e[1;34m%s\e[0m] :   \e[1;30mNULL\e[0m       FROM ----{\e[1;33m%s\e[0m}----\n", stackname, function);
        printf("----------------------------------------------------------\n");
        return ;
    }
    head = stack;
    tmp = stack;
    // printf("----------------------------------------------------------\n");
    // printf("|   The function name : \e[1;34m%s\e[0m |        STACK [\e[1;33m%s\e[0m]          |\n", function, stackname);
    // printf("----------------------------------------------------------\n");
    // if (act == 1)
    //     printf("|   before  :\t");
    // else
    //     printf("|   after   :\t");
    // printf("   [head is \e[1;32m%d\e[0m][next is \e[1;32m%d\e[0m][tail is \e[1;32m%d\e[0m]     |\n",head->value, head->next->value, head->previous->value);
    // printf("----------------------------------------------------------\n\n\n");
        printf("The Stack [\e[1;34m%s\e[0m] : ", stackname);
    do 
    {
        printf(" %d", tmp->value);
        tmp = tmp->next;
    } while (tmp != head);
    printf(".          FROM ----{\e[1;33m%s\e[0m}----", function);
    printf("\n");
}