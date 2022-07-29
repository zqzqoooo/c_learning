#include <stdio.h>
#include <stdlib.h>
#include "Array_create.h"

int main(){
    int* test_array;
    int array_mun = 10;
    test_array = array_create(array_mun);

    for (int i = 0; i < array_mun; i++)
    {
        printf("%d\n",test_array[i]);
    }
    
    array_free(test_array);

    return 0;
}