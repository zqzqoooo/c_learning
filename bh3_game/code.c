#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_point(int max_point ,int min_point);
void enemy_attribute(int* enemy_blood,int* enemy_attack);


int main(){
    int a,b;
    get_point(a,b);
}

int get_point(int max_point ,int min_point){
    int point;

    srand(time(NULL));
    point = rand();
    point = point%6 + 1;
    // printf("%d\t",point);

    return(point);
}

void enemy_attribute(int* enemy_blood,int* enemy_attack){
    int blood,attack;
    scanf("%d %d",&blood,&attack);
    *enemy_blood = blood;
    *enemy_attack = attack; 
}