int* array_create(int);
void array_free(int*);

int* array_create(int array_num){

    int* array_p = (int*)malloc(sizeof(int)*array_num);

    for ( int i = 0; i < array_num; i++){
        array_p[i] = 1;
    }

    return(array_p);
}

void array_free(int* array_p){

    free(array_p);
}