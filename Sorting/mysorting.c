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
void insertion_sort(Node** head){
   
   if (*head==NULL || (*head)->Next == NULL ){
    return ;

   }
    Node* result=NULL; 
    while (*head!=NULL){
        Node  * current =*head;
        *head=(*head)->Next;
        if (result == NULL || current->value < result->value){
            current->Next=result ;
            result=current;
        }else{
            Node * p=result;
            while (p!= NULL){
                if (p->Next== NULL || current->value < p->Next->value ){
                    current->Next=p->Next;
                    p->Next=current;
                    break;
                }
                p=p->Next;
            }
        }
    }
    *head = result;
}

void merge_sort( Node** head){
    Node * list_a;
    Node * list_b;

    if (*head == NULL || (*head)->Next == NULL){
        return;
    }
    merge_sort_split( head,&list_a,&list_b);
    merge_sort(&list_a);
    merge_sort(&list_b);
    *head = merge_sort_merged(list_a,list_b) ;

}
Node* merge_sort_merged(Node* list_a, Node* list_b){
    Node* result =NULL;
    if(list_a==NULL){
        return list_b;
    }
    if (list_b == NULL){
        return list_a;
    }
    if(list_a->value <= list_b->value ){
        result=list_a;
        result->Next=merge_sort_merged(list_a->Next,list_b);

    }
    else if (list_a->value > list_b->value){
        result=list_b;
        result->Next=merge_sort_merged(list_a,list_b->Next);
    }
    return result;
}
void merge_sort_split(Node** source,Node** list_a,Node** list_b){
    Node* fast =(*source)->Next ;
    Node* slow =*source;
    while(fast!=NULL){
        fast=fast->Next;
        if (fast != NULL){
            fast=fast->Next;
            slow=slow->Next;
        }

    }
    *list_a=*source;
    *list_b=slow->Next;
    slow->Next=NULL;
}



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

void heap_sort(int* array,int size){
    build_max_heap(array,size);

    for(int i=size-1; i>=0;i--){
        *(array)=*(array) ^  *(array+i);
        *(array+i)=*(array) ^  *(array+i);
        *(array)=*(array) ^  *(array+i);
        max_heapify(array,i,0);
    }
}

void build_max_heap(int* array,int size){
    for (int i = size/2-1 ;i>0;i--){
        max_heapify(array,size,i);
    }
}

void max_heapify(int* array,int size ,int index){
    int left = index*2+1;
    int right = index *2+2;
    int largest = index;
    if (left< size && *(array+left)  >  *(array+largest)   ){
        largest= left;
    }if (right < size && *(array+right)  >  *(array+largest)  ){
        largest= right;
    }
    if (largest != index){
        *(array+index)=*(array+index) ^  *(array+largest);
        *(array+largest)=*(array+index) ^  *(array+largest);
        *(array+index)=*(array+index) ^  *(array+largest);
        max_heapify(array,size,largest);
    }
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
    for (int j=start_index;j<end_index;j++){
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