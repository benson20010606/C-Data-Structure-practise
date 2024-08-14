#ifndef MYARRAY_H
#define MYARRAY_H
#include <stdlib.h>
#define arrayMax 100
void show (int* array, int size);
void  read(int* array,int size, int index);
void write( int *array, int *size, int value);
int* insert(int *array, int *size, int index, int value);
int* delete(int *array, int *size, int index);

#endif