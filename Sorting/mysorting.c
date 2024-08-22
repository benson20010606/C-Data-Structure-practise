#include <stdio.h>
#include <stdlib.h>
#include "mysorting.h"


void bubble_sort(int* array,int size){
    for (int i=0;i<size-1;i++){
        for (int j=0;j<size-2-i;j++){
            if ( *(array+j)>*(array+j+1)){
                *(array+j)=(*(array+j)) ^  (*(array+j+1));
                *(array+j+1)=(*(array+j)) ^  (*(array+j+1));
                *(array+j)=(*(array+j)) ^  (*(array+j+1));
            }
        }
    }
}
void insertion_sort(Node** head,int size);
void merge_sort( Node** head,int size);
void selection_sort(int* array,int size){
    for (int i=0;i<size-1;i++){
        min=i;
        for (int j=i+1;j<size;j++){
            if (*(array+j)< *(array+min)){
                min=j;
            }
        }
        if(min != i){
            *(array+i)= (*(array+i)) ^(*(array+min));
            *(array+min)= (*(array+i)) ^(*(array+min));
            *(array+i)= (*(array+i)) ^(*(array+min)); 
        }    
    }


}

void heap_sort(int* array,int size);
void quick_sort(int* array,int size){
    
}