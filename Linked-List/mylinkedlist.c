#include <stdio.h>
#include <stdio.h>
#include "mylinkedlist.h"

Node* createNode(int value){
    Node* newnode =(Node*)malloc(sizeof(Node));
    newnode->value=value;
    newnode->Next=NULL;

    return newnode;
}
void insertAtHead(Node** head, int value);
void insertAtTail(Node** head, int value);
void deleteNode(Node** head, int value);
Node* search(Node* head, int value);

void printList(Node* head){
    Node* temp=head->Next ;
    printf("Linked-list :");
    if (temp==NULL){
        printf("NULL!\n");
    }else{
        while(temp != NULL){
            printf("%2d",temp->value);
            temp=temp->Next;

        }
    }
    printf("\n");

}


void freeList(Node* head){
    Node* temp ;
    while(head != NULL){
        temp=head;
        head=head->Next;
        free(temp);
    }

}