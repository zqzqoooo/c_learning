#include <stdio.h>
#include <stdlib.h>
#include "Array.h"

// typedef struct{
//     int *array;
//     int size;
// }array;


int main(int argc, char const *argv[])
{
    int array_size = 10;
    array a = array_create(array_size);
    array_free(&a);
    return 0;
}

array array_create(int array_size){
    array a;
    a.size = array_size;
    a.array = (int*)malloc(sizeof(int)*a.size);
    return a;
}


void array_free(array *a){
    free(a->array);
    a->array = NULL;
    a->size = 0;
}


int array_size(array *a){
    return(a->size);
}

int array_at(array *a, int index){
    return &(a->array[index]);
}