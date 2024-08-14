#include <stdio.h>
#include <stdio.h>
#include "myarray.h"

void show (int* array, int size){
    printf("Array(%d):",size);
    if (size==0){
        printf("NULL");
    }else{
        for(int i=0; i<size;i++ ){
            printf("%5d",array[i]);
        }

    }
    printf("\n\n");
}


void read(int* array,int size, int index){
    if (index>=0 && index<=size-1){
        printf("array[%d] is %d\n",index,array[index]);
    }else{
        printf("index is out of range !! \n");
    }
}


void write( int *array, int *size,  int value){
    if (*size<arrayMax){
        *(array+*size)=value;
        *size =*size+1;
        
    }else 
    {
        printf("index out of range !! \n");
    }


}
void insert(int *array, int *size, int index, int value){
    if( index>=0 && index<arrayMax && *size<arrayMax && index<=*size){
        for (int i=*size;i>index;i--){
            *(array+i)=*(array+i-1);
        }
        *(array+index)=value;
        *size=*size+1;
    }else{
        printf("index out of range or size will out of range !!\n");
    }

}
void delete(int *array, int *size, int index){
 
    if( index>=0 && index < arrayMax && *size>0){
        for(int i=index;i<*size-1;i++){
            //printf("!%d!\n",i);
            *(array+i)=*(array+i+1);
            
        }
        *(array+ (*size))=0;
        *size=*(size)-1;
        //printf("%d",*size);
    }else{
        printf("index out of range or size will out of range !!\n");
    }

}

