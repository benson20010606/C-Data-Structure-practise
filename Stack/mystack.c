#include <stdio.h>
#include <stdlib.h>
#include "mystack.h"

void createStack(Stack * s,int size){

    s->stack =(int*)malloc(size*sizeof(int));
    s->size=size;
    s->top=-1;

}
void push(Stack * stack ,int value){
    if (isfull( stack )){
        printf("stack is full ,can't push");
    }else{
        stack->top=stack->top+1;
        stack->stack[stack->top]=value;
    }

}
void pop(Stack * stack ){
    if (isempty( stack )){
        printf("stack is is empty ,can't pop");
    }else{      
        stack->stack[stack->top]=0;
        stack->top=stack->top-1;
    }
}
int isempty(Stack * stack ){
    return stack->top==-1 ? 1 : 0;
}
int isfull(Stack * stack ){
    return stack->top==stack->size-1 ? 1 : 0;
}
void topitem(Stack * stack){
    if (isempty( stack )==1){
        printf("stack is is empty ");
    }else{
        printf("Top item at stack is %d",*(stack->stack+stack->top));
    }
}

void printstack(Stack * stack){
    printf("stack:");
    if ( isempty( stack )==1){
        printf("NULL!! \n");
    }else{
        for(int i=0;i<=stack->top;i++){
            printf(" %2d", stack->stack[i]);
        }
    }printf(" \n");

}

void freestack(Stack * stack){
    free(stack->stack);
};