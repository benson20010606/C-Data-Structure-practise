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
        int min=i;
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




#pragma quick sort  
/// @brief use Divide and Conquer to solve quick sort
void quick_sort(int* array,int start_index  ,int end_index){
    if (start_index<end_index){
        int q= quick_sort_partition(array,start_index,end_index);
        quick_sort(array,start_index,q-1);
        quick_sort(array,q+1,end_index);
    }   
}
int  quick_sort_partition(int* array,int start_index,int end_index){
    int x= *(array+end_index);  // assume end_index is pivot
    int i=start_index-1;
    for (int j=start_index;i<end_index;i++){
        if (*(array+j)<x){
            i=i+1;
            *(array+j)=*(array+j) ^ *(array+i);
            *(array+i)=*(array+j) ^ *(array+i);
            *(array+j)=*(array+j) ^ *(array+i);
        }
    }
    *(array+end_index)=*(array+end_index) ^ *(array+i+1);
    *(array+i+1)=*(array+end_index) ^ *(array+i+1);
    *(array+end_index)=*(array+end_index) ^ *(array+i+1);

    return i+1;
}

#pragma endregion