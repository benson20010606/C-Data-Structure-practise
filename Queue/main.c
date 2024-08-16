#include <stdio.h>
#include <stdlib.h>
#include "mylinkedlist.h"
#include "myqueue.h"


void clear(void){
    char ch;
    while((ch=getchar())!='\n'&&ch!=EOF){	
    }
}


int main(int argc, char *argv[]){
    char ch;
    int value=0;
    int condition=1;
    Queue* queue=(Queue *) malloc(sizeof(Queue));
    createqueue(queue);

    while (condition) {
        
      

        printf("\n\n1. enqueue  ");	
        printf("2. dequeue  ");	
        printf("3.peekfront  ");	
        printf("4. peekrear  ");	

        printf("Q. exit  \n\n\n");

        printList(queue->front);


        
        ch=getchar();
        clear();
        switch (ch)
        {
            case '1' :
                printf("which value  u want to enqueu : ");
                scanf("%d",&value);
                clear();
                enqueue(queue,value);
                printList(queue->front);
                //
                
                break;

            case '2' :
            /* code */


                dequeue(queue);
                printList(queue->front);
                //
                break;
            case '3' :
            /* code */
                peekfront(queue);
                break;
                //
            case '4' :
            /* code */
                peekrear(queue);
                break;

            
            case 'Q' :
                condition=0;
                freeList(&queue->front);
                free(queue);
                break;


        }


    }

    return 0;

}