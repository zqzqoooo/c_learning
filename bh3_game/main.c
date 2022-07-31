/*开发日志
马上要去上大学了，暑假写点玩玩 --2022.7.31
这是一个仿写项目，我现在还没学过c++，只能用c在黑框框里写着玩
希望后面可以用c++来完善
*/

#include <stdio.h>
#include "code.h"
#include "Array_create.h"

int attribute_return = 0;//角色和怪物状态 1为有 0为无 -1为错误

char card1[40] = "测试卡1";//卡片一到五号位
char card2[40] = "测试卡2";
char card3[40] = "测试卡3";
char card4[40] = "测试卡4";
char card5[40] = "测试卡5";

int point[32] = {0};//骰子点数，最多32个


int main(int argc, char const *argv[]){

    char player_name [10] = "胡桃";//角色名
    char enemy_name [10] = "北风狼";//敌人命

    int player_blood = 100;//角色血量
    int enemy_blood = 100;//敌人血量
    int enemy_attack;//敌人攻击
    int point_max,point_min;//骰子点数最大最小

    // enemy_attribute(&enemy_blood,&enemy_attack);//手动设置生命

    for (int i = 0; i <= 3; i++){//给前四个数赋值
        point[i] = get_point(point_max,point_min);//c的随机数不好使 现在还没办法
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
