#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H
#include <stdlib.h>


typedef struct Node 
{
    int value;
    struct Node* Next;
} Node ;



Node* createNode(int value);
void insertAtHead(Node** head, int value);
Node* insertAtTail(Node** head, int value);
Node* deletefromHead(Node** head);
void deletefromTail(Node** head);
void deleteNode(Node** head, int value);
Node* search(Node* head, int value);
void printList(Node* head);
void freeList(Node** head);


#endif