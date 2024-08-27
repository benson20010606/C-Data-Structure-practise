#include <stdio.h>
#include <stdlib.h>
#include "mysearch.h"

int  sequential_search(int* array,int size,int key){
    for(int i=0 ;i<size ;i++){
        if ( * (array+i) == key )
        return i;
    }
    return -1;
}

int binary_search(int* array,int start ,int end,int key){
    quick_sort(array,start,end);
    int mid=start + (end - start) / 2;
    if (start <= end ){
        if( *(array+mid) == key){
            return mid;
        }else if (*(array+mid) <= key){
            return binary_search(array, mid +1 ,end,key);
        }else {
            return binary_search(array, start ,mid-1,key);
        }   
    }
    return -1;
}

int interpolation_search(int* array,int start ,int end,int key){
    quick_sort(array,start,end);
    while (start <= end ){
        int mid=start+(key - *(array+start))*(end-start)/(*(array+end)-*(array+start));
        if (mid < start|| mid >end) return -1;
        if (key > *(array+mid)){
             start =mid+1;
        }else if (key < *(array+mid)){
            end =mid-1;
        }else {
           return mid ;
        }

    }
    return -1;
}




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