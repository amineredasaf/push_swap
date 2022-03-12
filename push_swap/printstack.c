#include "push_swap.h"

void printstack(t_stack *stack, const char *function, int act, char *stackname)
{
    t_stack *head;

    if (stack == NULL)
        {
            printf("stack from == NULL\n");
            return ;
        }
    head = stack;
    printf("----------------------------------------------------------\n");
    printf("|   The function name : \e[1;34m%s\e[0m |        STACK [\e[1;33m%s\e[0m]          |\n", function, stackname);
    printf("----------------------------------------------------------\n");
    if (act == 1)
        printf("|   before  :\t");
    else
        printf("|   after   :\t");
    printf("   [head is \e[1;32m%d\e[0m][next is \e[1;32m%d\e[0m][tail is \e[1;32m%d\e[0m]     |\n",head->value, head->next->value, head->previous->value);
    printf("----------------------------------------------------------\n\n\n");
}