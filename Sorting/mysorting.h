#ifndef MYSORTING_H
#define MYSORTING_H
#include <stdlib.h>
#include "mylinkedlist.h"
void bubble_sort(int* array,int size);
void insertion_sort(Node** head);
void merge_sort( Node** head);
Node* merge_sort_merged(Node* list_a, Node* list_b);
void merge_sort_split(Node** source,Node** list_a,Node** list_b);

void selection_sort(int* array,int size);


void heap_sort(int* array,int size);
void build_max_heap(int* array,int size);
void max_heapify(int* array,int size ,int index);


void quick_sort(int* array,int start_index,int end_index);
int quick_sort_partition(int* array,int start_index,int end_index);

#endif