#include <stdio.h>

void getpoint(int *p);

int main(void){

    int x = 1;
    getpoint(&x);
    printf("%p\n",&x);

    return 0;
}

void getpoint(int *p){

    printf("%p\n",p);
    printf("%d\n",*p);
    *p = 12;

}