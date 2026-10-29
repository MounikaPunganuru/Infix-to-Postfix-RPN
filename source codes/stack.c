//stack.c
#include "header.h"

char stack[100];
int top = -1;

void push(char ch)
{
    top++;
    stack[top] = ch;
}

char pop()
{
    return stack[top--];
}

char peek()
{
    return stack[top];
}
