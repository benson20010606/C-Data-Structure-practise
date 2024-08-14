#include <stdio.h>
#include <stdio.h>
#include "myarray.h"



void clear(void){
    char ch;
    while((ch=getchar())!='\n'&&ch!=EOF){	
    }
}


int main(int argc, char *argv[]){
    char ch;
    int array[100]={};
    int size =0;
    int index=0;
    int value =0;
    int * array_t =array;
    
    while (1) {
        
       show(array_t,size);

        printf("1. Read\n\n");	
        printf("2. Write\n\n");	
        printf("3. Insert\n\n");	
        printf("4. Delet\n\n");	

 

    //int* insert(int *array, int *size, int index, int value);
    //int* delete(int *array, int *size, int index);


        
        ch=getchar();
        clear();
        switch (ch)
        {
            case '1' :
                printf("which index u want to check :");
                scanf("%d",&index);
                read(array_t,size,index);
                clear();
                break;

            case '2' :
            /* code */
                printf("which value  u want to add at index %d :",size);
                scanf("%d",&value);
                printf("%d!!!!!!!!\n",value);
                clear();
                write( array_t, &size,value);
                break;
            case '3' :
            /* code */
                break;
            case '4' :
            /* code */
                break;


        }


    }



}