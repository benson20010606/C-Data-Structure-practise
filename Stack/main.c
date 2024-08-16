#include <stdio.h>
#include <stdlib.h>
#include "mystack.h"



void clear(void){
    char ch;
    while((ch=getchar())!='\n'&&ch!=EOF){	
    }
}


int main(int argc, char *argv[]){
    char ch;
    int value=0;
    int condition=1;
    int size=0 ;
    Stack stack;
    printf("Stack size :");
    scanf("%d",&size);  clear();
    createStack(&stack,size);
    while (condition) {
        
      

        printf("\n\n1. Push  ");	
        printf("2. Pop ");	
        printf("3. TopItem  ");	
        printf("4. IsEmpty  ");	
        printf("5. IsFull  ");	
        printf("Q. exit  \n\n\n");
        printstack(&stack);
        ch=getchar();
        clear();
        switch (ch)
        {
            case '1' :
    
                printf("which value  u want to push  : ");
                scanf("%d",&value);
                clear();
                push(&stack,value);
                break;

            case '2' :
            /* code */
                pop(&stack);

                break;
            case '3' :
            /* code */
                topitem(&stack);
                break;

            case '4' :
            /* code */
                if (isempty( &stack )){
                    printf("stack is is empty ");
                }
                break;

            case '5' :
            /* code */
                if (isfull( &stack )){
                    printf("stack is full");
                }
                break;

            case 'Q' :
                condition=0;
                freestack(&stack);
                break;


        }


    }

    return 0;

}