#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_point(int max_point ,int min_point);
void enemy_attribute(int* enemy_blood,int* enemy_attack);
int hurt_enemy(int hit,int* enemy_blood);
int hurt_player(int hit,int* player_blood);


int main(){
    int a,b;
    get_point(a,b);
}

int get_point(int max_point ,int min_point){//获得骰子点数
    int point;

    srand(time(NULL));
    point = rand();
    point = point%6 + 1;
    // printf("%d\t",point);

    return(point);
}

void enemy_attribute(int* enemy_blood,int* enemy_attack){//自定义敌人血量blood攻击attack
    int blood,attack;
    scanf("%d %d",&blood,&attack);
    *enemy_blood = blood;
    *enemy_attack = attack; 
}

int hurt_enemy(int hit,int* enemy_blood){//对怪物造成伤害
    *enemy_blood -= hit;
}

int hurt_player(int hit,int* player_blood){//对角色造成伤害
    *player_blood -= hit;
}