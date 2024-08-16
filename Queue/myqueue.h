#ifndef MYQUEUE_H
#define MYQUEUE_H
#include <stdlib.h>
#include "mylinkedlist.h"
typedef struct Queue
{
    Node * front;
    Node * rear;

    /* data */
}Queue;

void createqueue(Queue* q);
void enqueue(Queue* q,int value);
int dequeue(Queue* q);
int isempty(Queue* q);

void peekfront(Queue* q);
void peekrear(Queue* q);

void printqueue(Queue* q);

#endif