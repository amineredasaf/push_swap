#include "push_swap.h"

void printstack(t_stack *stack, int act)
{
    t_stack *head;

    head = stack;
    printf("----------------------------------------------------\n");
    if (act == 1)
        printf("before  :\t");
    else
        printf("after   :\t");
    printf("[head is %d][next is %d][tail is %d]\n",head->value, head->next->value, head->previous->value);
    printf("----------------------------------------------------\n");
}