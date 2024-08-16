#include <stdio.h>
#include <stdlib.h>
#include "mylinkedlist.h"

Node* createNode(int value){
    Node* newnode =(Node*)malloc(sizeof(Node));
    newnode->value=value;
    newnode->Next=NULL;

    return newnode;
}
void insertAtHead(Node** head, int value){
    Node* newnode= createNode(value);
    newnode->Next=*head;
    *head=newnode;

}
Node* insertAtTail(Node** head, int value){
    Node* newnode= createNode(value);
    if (*head==NULL){
        *head=newnode;
       
    }else{
        Node* temp=*head;
        while((temp->Next)!=NULL){
            temp=temp->Next;

        }    
        temp->Next=newnode;
        
    }
    return newnode;
}


void deletefromHead(Node** head){
    if(*head == NULL){
        printf("this Linked-List is NULL!!\n");
    }else{
        Node* temp=*head;
        *head=(*head)->Next;
        free(temp);
    }
}
void deletefromTail(Node** head){
    if(*head == NULL){
        printf("this Linked-List is NULL!!\n");
    }     
    else if ((*head)->Next == NULL) {
        free(*head);
        *head = NULL;
    }else{
        Node* temp=*head;
        Node* prev=NULL;
        while (temp->Next!=NULL){
            prev=temp;
            temp=temp->Next;
        }
        prev->Next=NULL;
        free(temp);

    }
}
void deleteNode(Node** head, int value){
    
    if(*head == NULL){
        printf("this Linked-List is NULL!!\n");
    }else{
        Node* temp=*head;
        if (temp->value == value){
            deletefromHead(head);
        }else{
           Node* prev=NULL;
           while (temp!=NULL && temp->value != value ){
            prev=temp;
            temp=temp->Next;
           }
           if (temp==NULL){
            printf("%d is not in this Linked-list!! \n",value);
            return;
           }
           if (temp->Next==NULL){
                deletefromTail(head);
           }else{
            prev->Next=temp->Next;
            free(temp);

           }

        }
    }
}

Node* search(Node* head, int value){
    Node* temp=head ;
    if (temp!=NULL){
        while(temp != NULL){
            if(temp->value != value){
                temp=temp->Next;
            }
            else {
                return temp;
            }
        }
    }   
    return ((void*)(-1));
}


void printList(Node* head){
    Node* temp=head ;
    printf("Linked-list :");
    if (temp==NULL){
        printf("NULL!\n");
    }else{
        while(temp != NULL){
            printf("%  2d",temp->value);
            temp=temp->Next;

        }
    }
    printf("\n");

}
void freeList(Node** head){
    Node* temp=NULL;
    while(*head != NULL){
        temp=*head;
        *head=(*head)->Next;
        free(temp);
    }
    *head=NULL;
}