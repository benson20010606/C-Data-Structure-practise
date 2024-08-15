#include <stdio.h>
#include <stdlib.h>
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
    Node* HEAD=NULL;
    while (condition) {
        
      

        printf("\n\n1. insertAtHead  ");	
        printf("2. insertAtTail  ");	
        printf("3. deletfromHead  ");	
        printf("4. deletfromTail  ");	
        printf("5. delet  ");	
        printf("6. search  ");	
        printf("7. printList  ");
        printf("8. freeList  ");
        printf("Q. exit  ");

 


        
        ch=getchar();
        clear();
        switch (ch)
        {
            case '1' :
                printf("which value  u want to insert At Head  : ");
                scanf("%d",&value);
                clear();
                insertAtHead(&HEAD,  value);
                //
                
                break;

            case '2' :
            /* code */
                printf("which value  u want to insert At Tail : ");
                scanf("%d",&value);
                clear();
                insertAtTail(&HEAD,  value);
                //
                break;
            case '3' :
            /* code */
                printList( HEAD);
                deletefromHead(&HEAD);
                printList( HEAD);
                break;
                //
            case '4' :
            /* code */
                printList( HEAD);
                deletefromTail(&HEAD);
                printList( HEAD);
                break;
            case '5' :
            /* code */
                printf("which value u want to delete :");
                scanf("%d",&value); clear();
                deleteNode(&HEAD,value);
                break;
            case '6' :
            /* code */
                printf("which value  u want to search :");
                scanf("%d",&value);
                clear();
                Node* get=search(HEAD, value);
               
                if (get==((void*)(-1))){
                    printf("%d is not in this Linked-List!!",value);
                }else{
                    printf("node address is %p\n",get);
                    printf("node value is %d\n",get->value);                    
                }
                break;
            case '7' :
               printList( HEAD);
               
                break;
            case '8' :
                freeList(&HEAD);
                break;
            case 'Q' :
                condition=0;
                freeList(&HEAD);
                break;


        }


    }

    return 0;

}