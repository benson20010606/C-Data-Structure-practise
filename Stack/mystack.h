#ifndef MYSTACK_H
#define MYSTACK_H
#include <stdlib.h>

/// can't init in struct!
typedef struct Stack 
{
    int size; 
    int *stack;
    int top;
} Stack ;


void createStack(Stack*  s,int size);
void push(Stack * stack,int value );
void pop(Stack * stack );
int isempty(Stack * stack );
int isfull(Stack * stack );
void topitem(Stack * stack);
void printstack(Stack * stack);
void freestack(Stack *stack);


#endif