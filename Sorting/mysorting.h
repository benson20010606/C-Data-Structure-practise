#ifndef MYSORTING_H
#define MYSORTING_H
#include <stdlib.h>
#include "mylinkedlist.h"
void bubble_sort(int* array,int size);
void insertion_sort(Node** head,int size);
void merge_sort( Node** head,int size);
void selection_sort(int* array,int size);
void heap_sort(int* array,int size);
void quick_sort(int* array,int size);



#endif