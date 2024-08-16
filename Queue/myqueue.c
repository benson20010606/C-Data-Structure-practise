#include <stdio.h>
#include <stdlib.h>
#include "myqueue.h"
#include "mylinkedlist.h"
void createqueue(Queue* q){
    q->front=NULL;
    q->rear=NULL;
}
void enqueue(Queue* q,int value){
    Node * newdone=createNode(value);
    if(isempty(q)){
        q->front= newdone;
        q->rear= newdone;
    }else{
        q->rear->Next= newdone;
        q->rear= newdone;
    }
    printf("%d is  enqueue !!\n  ", value);
}
int dequeue(Queue* q){
    if(isempty(q)){
        printf("Queue is empty!!\n");
        return -1;
    }else{
        
        Node* temp=q->front;
        int value=temp->value;
        q->front=q->front->Next;
        if( q->front==NULL){
            q->rear=NULL;
        }
        printf("%d is  dequeue !!\n  ",temp->value);
        free(temp);
        return value;
    }
}
int isempty(Queue* q){
    return (q->front==NULL &&  q->rear==NULL );
}




void peekfront(Queue* q){
    if(isempty(q)){
        printf("Queue is empty!!\n");
        
    }else{
        printf("front is %d",q->front->value);
    }
}
void peekrear(Queue* q){
    if(isempty(q)){
        printf("Queue is empty!!\n");
        
    }else{
        printf("front is %d",q->rear->value);
    }
}

void printqueue(Queue* q){
    if(isempty(q)){
        printf("Queue is empty!!\n");
        
    }else{
        printf("Queue:");
        printList(q->front);
    }
}