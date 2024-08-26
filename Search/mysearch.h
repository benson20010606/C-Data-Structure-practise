#ifndef MYSEARCH_H
#define MYSEARCH_H
#include <stdlib.h>
#include "mysearch.h"

int sequential_search(int* array,int size,int key);
int binary_search(int* array,int start ,int size,int key);
int binary_search_tree_search(int* array,int size,int key);
int interpolation_search(int* array,int start ,int end,int key);


void quick_sort(int* array,int start_index,int end_index);
int quick_sort_partition(int* array,int start_index,int end_index);

#endif