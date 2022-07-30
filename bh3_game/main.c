#include <stdio.h>
#include "code.h"
#include "Array_create.h"

int attribute_return = 0;

char card1[40] = "测试卡1";
char card2[40] = "测试卡2";
char card3[40] = "测试卡3";
char card4[40] = "测试卡4";
char card5[40] = "测试卡5";

int point[32] = {0};


int main(int argc, char const *argv[]){

    char player_name [10] = "胡桃";
    char enemy_name [10] = "北风狼";

    int player_blood = 100;
    int enemy_blood = 100;
    int enemy_attack;
    int point_max,point_min;

    // enemy_attribute(&enemy_blood,&enemy_attack);//手动设置生命

    for (int i = 0; i < 3; i++){
        point[i] = get_point(point_max,point_min);
    }
    

    printf("%s\t\t\t\t\t%s\n",player_name,enemy_name);
    printf("我方生命：%d\t\t\t\t敌方生命%d\n",player_blood,enemy_blood);
    
    if (attribute_return == 0){//判断状态
        printf("无状态\n");
    }else if (attribute_return == 1){
        //状态
    }else{
        printf("状态错误！");
    }
    printf("\n");
    printf("\t\t%s\n",card1);
    printf("\t\t%s\n",card2);
    printf("\t\t%s\n",card3);
    printf("\t\t%s\n",card4);
    printf("\t\t%s\n",card5);
    printf("你的棋子：\n");

    for (int i = 0; point[i] != 0; i++)
    {
        printf("%d\t",point[i]);
    }
    
    


    return 0;
}
