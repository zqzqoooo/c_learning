typedef struct{
    int *array;
    int size;
}array;

array array_create(int array_size);
void array_free(array *a);
int array_size(array *a);
int array_at(array *a, int index);
