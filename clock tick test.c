#include <stdio.h>
#include <time.h>

void real_time(int,int,int,double *p);

int main(void){

    double time_start,time_end;
    const int FREQUENCY = 1e6;
    double time_real;
    time_start = clock();

    for (int i = 0; i < FREQUENCY; i++)
    {
        // 放测试用函数*****************
        int input_1 = 2;
        int input_2 = 50;
        int num_sum = 0;
        int x,y,z;
        int num_state = 1;

        for (input_1 = input_1; input_1 <= input_2; input_1++)
        {
            num_state = 1;

            if (input_1 == 1)
            {
                input_1 = 2;
            }else if (input_1 == 2)
            {
                y++;
                num_sum += input_1;
            }
            
            
            for ( x = 2; x < input_1; x++)
            {
                if (input_1 % x == 0)
                {
                    num_state = 0;
                    break;
                }
            
            }

            if (num_state == 1)
            {
                y++;
                num_sum += input_1;               
            }
        }
        
        // printf("%d %d\n",y,num_sum);
        // *******************************************
    }

    time_end = clock();
    real_time( time_start, time_end, FREQUENCY, &time_real);
    printf("realtime = %lf",time_real);



    return 0;
}

void real_time(int time_start ,int time_end,int FREQUENCY,double *p){
    *p = ((double)time_end-time_start)/CLK_TCK/FREQUENCY;
    printf("time_start = %d\n",time_start);
    printf("time_end = %d\n",time_end);
    printf("CLK_TCK = %d\n",CLK_TCK);
    printf("*p = %x\n",p);
}