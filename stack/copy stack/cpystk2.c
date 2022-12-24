#include<stdlib.h>
#include<stdio.h>
#include "cstack.h"

void cpystk(stack *stack1 , stack *stack2)
{
    int i,var;
    stack tempstack;
    init(&tempstack);
    i = stack1 -> top;
    while (i>=0)
    {
        push(&tempstack,stack1 -> data[i]);
        i--;
    }
    while (!isempty(&tempstack))
    {
        var = pop(&tempstack);
        push(stack2,var);
    }
    
}

void main()
{
    stack s1 , s2;
    init(&s1);
    init(&s2);
    push(&s1,1);
    push(&s1,2);
    push(&s1,3);
    push(&s1,4);
    push(&s1,5);
    cpystk(&s1,&s2);
    printf("First stack \n");
    display(&s1);
    printf("second stack \n");
    display(&s2);
}