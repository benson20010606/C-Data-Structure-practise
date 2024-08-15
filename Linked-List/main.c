#include <stdio.h>
#include <stdio.h>
#include "mylinkedlist.h"



void clear(void){
    char ch;
    while((ch=getchar())!='\n'&&ch!=EOF){	
    }
}


int main(int argc, char *argv[]){
    char ch;
    int value=0;
    int condition=1;
    Node* HEAD=createNode((int)NULL);
    while (condition) {
        
      

        printf("1. insertAtHead\n\n");	
        printf("2. insertAtTail\n\n");	
        printf("3. deleteNode\n\n");	
        printf("4. search\n\n");	
        printf("5. printList\n\n");
        printf("6. freeList\n\n");

        printf("Q. exit\n\n");

 


        
        ch=getchar();
        clear();
        switch (ch)
        {
            case '1' :
                printf("which value  u want to insert At Head  : ");
                scanf("%d",&value);
                clear();
                //
                
                break;

            case '2' :
            /* code */
                printf("which value  u want to insert At Tail : ");
                scanf("%d",&value);
                clear();
                //
                break;
            case '3' :
            /* code */
                printf("which value u want to delete :");
                scanf("%d",&value); clear();
                //
             

                break;
            case '4' :
            /* code */
                printf("which value  u want to search :");
                scanf("%d",&value);
                clear();
                //
                break;
            case '5' :
               
               
                break;
            case '6' :
                freeList(HEAD);
                break;
            case 'Q' :
                condition=0;
                freeList(HEAD);
                break;


        }


    }



}