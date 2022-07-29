#include <stdio.h>
#include <stdlib.h>

int* array_create(int);
void array_free(int*);

int main(){
    
    int n = 15; 
    int* array;
    
    printf("请输入数组内单元个数\n");
    scanf("%d",&n);
    array = array_create(n);
    // for (int i = 0; i < n; i++){
    //  printf("%d.\tarray[%d] = %d\n",i+1,i,array[i]);
    // }
    array_free(array);
    
    return 0;
}


int* array_create(int array_num){

    int* array_p = (int*)malloc(sizeof(int)*array_num);

    for ( int i = 0; i < array_num; i++){
        array_p[i] = i;
    }

    return(array_p);
}

void array_free(int* array_p){

    free(array_p);
}