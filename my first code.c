#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int a = 0;
int b = 0;
int c = 0;
int t;
int input = 0;

int main(){
//******************************
//Test 1
//******************************

    // scanf("%d %d %d",&a,&b,&c);
    // if (a>b){
    //     t = a;
    // }
    // else{
    //     t = b;
    // }
    // if (t>c){
    //     printf("the largest int is %d.",t);
    // }
    // else{
    //     printf("the largest int is %d.",c);
    // }


//******************************
//Test 2 
//******************************

    // scanf("%d",&input);

    // switch (input)
    // {
    // case 1:
    // printf("the number is 1.");
    //     break;
    // case 2:
    //     printf("the number is 2.");
    //     break;
    // default:
    //     printf("Who are you?!");
    //     break;
    // }


//******************************
//Test 3 
//******************************

    // scanf("%d",&input);

    // do
    // {
    //    a++;
    //    input /= 10;
    // } while (input > 0);
    
    // printf("a = %d",a);


//******************************
//Test 4
//******************************
    // a = 2;
    // printf("%d %d",a = a--,a = --a);
    // //--a 先减再引用 a--先引用再减


//******************************
//Test 5
//******************************
    // srand(time(0));
    // input = rand()%100 + 1;

    // printf("%d",input);


//******************************
//Test 6
//******************************

    // scanf("%d",&a);

    // while (a>0)
    // {
    //     b = a%10;
    //     printf("%d",b);
    //     c = c*10 + b;
    //     a /= 10;
    // }
    
    // printf("\n%d\n",c);


//******************************
//Test 7
//******************************   

    // int n;
    // scanf("%d",&n);
    // int fact = 1;

    // for ( a = 1; a <= n; a++)
    // {
    //     fact *= a;
    // }
    
    // printf("%d",fact);


//******************************
//Test 7
//******************************   

    // int x,i;
    // scanf("%d",&x);
    // int isprime = 1;

    // for (i = 2; i < x ; i++)
    // {
    //     if (x%i == 0)
    //     {
    //        isprime = 0;
    //        break;
    //     }
    // }
    
    // if (isprime == 1){
    //     printf("%d是一个素数。",x);
    // }else{
    //     printf("%d不是一个素数。",x);
    // }


//******************************
//Test 7  输出100以内的质数
//******************************   

    // int x,i;
    // int isprime = 1;

    // for (x = 2; x <= 100; x++)  //100以内
    // {
    //     for (i = 2; i < x ; i++)
    //     {
    //         if (x%i == 0)
    //         {
    //         isprime = 0;
    //         break;
    //         }
    //     }

    //     if (isprime == 1){
    //         printf("%d\n",x);
    //     }

    //     isprime = 1;
    // }


//******************************
//Test 8  输出前50个质数
//******************************   
    
    // int x,i;
    // int z = 1;
    // int isprime = 1;
    // int number;
    // scanf("%d",&number);

    // for (x = 2; z <= number; x++)  
    // {
    //     for (i = 2; i < x ; i++)
    //     {
    //         if (x%i == 0)
    //         {
    //         isprime = 0;
    //         break;
    //         }
    //     }

    //     if (isprime == 1){
    //         printf("%d ",x);
    //         if (z%5 == 0)
    //         {
    //             printf("\n");
    //         }
    //         z++;
    //     }

    //     isprime = 1;
    // }


//******************************
//Test 9  正序分解整数
//******************************
    
    // int x,y,n;
    // int z = 0;
    // int num = 0;

    // scanf("%d",&x);
    // int test1 = x;

    // do{
    //     num++;
    //     test1 /= 10;
    // } while (test1> 0);
    // num -= 1;

    // z = pow(10,num);
    // int test = x / z;
    
    // while ((x / z) != 0)
    // {
    //     y = (x / z) % 10;
    //     printf("%d ",y);
    //     num--;
    //     z = pow(10,num);
    //     if (z == 0)
    //     {
    //         break;
    //     }
        
    // }


//******************************
//Test 10  求符合给定条件的整数集
//******************************

    // int a = 0;
    // int x,y,z;
    // int num = 0;
    // scanf("%d",&a);
    // for (x = y = z = a;x <= a+3; x++)
    // {
    //     for (y = z = a;y <= a+3; y++)
    //     {
    //         for (z = a;z <= a+3; z++)
    //         {
    //             printf("%d%d%d",x,y,z);
    //             num++;

    //             if (num%6 == 0)
    //             {
    //                 printf("\n");
    //             }else
    //             {
    //                 printf(" ");
    //             }
                

    //             if (z >= 6)
    //             {
    //                 break;
    //             }
                
    //         }
    //         if (y >= 6)
    //         {
    //             break;
    //         }
            
    //     }
    //     if (x >=6 )
    //     {
    //         break;
    //     }
    

    // }


//******************************
//Test 11  九九乘法表
//******************************

    // int first_num = 1;
    // int second_num = 2;

    // for ( second_num = 1; second_num <= 9; second_num++)
    // {
    //     for (first_num = 1; first_num <= 9; first_num++)
    //     {
    //         printf("%d*%d=%d",first_num,second_num,first_num*second_num);
    //         if (first_num == second_num)
    //         {
    //             printf("\n");
    //             break;
    //         }else{
    //             printf("   ");
    //         }

    //     }
        
    // }
    

//******************************
//Test 12  素数统计求和
//******************************

    // int input_1 = 0;
    // int input_2 = 0;
    // int num_sum = 0;
    // int x,y,z;
    // int num_state = 1;

    // scanf("%d %d",&input_1,&input_2);

    // for (input_1 = input_1; input_1 <= input_2; input_1++)
    // {
    //     num_state = 1;

    //     if (input_1 == 1)
    //     {
    //         input_1 = 2;
    //     }else if (input_1 == 2)
    //     {
    //         y++;
    //         num_sum += input_1;
    //     }
        
        
    //     for ( x = 2; x < input_1; x++)
    //     {
    //         if (input_1 % x == 0)
    //         {
    //             num_state = 0;
    //             break;
    //         }
        
    //     }

    //     if (num_state == 1)
    //     {
    //         y++;
    //         num_sum += input_1;               
    //     }
    // }
    
    // printf("%d %d",y,num_sum);


// ******************************
// Test 13  素数统计求和
// ******************************

    // char i = 255;
    // unsigned char x = 255;
    // printf("%d %d",i,x);

    // int round;
    // const double PAI = 3.1415926; //设置常量
    // scanf("%d",&round);
    // printf("*%-10.2lf*",PAI*round); //调整输出占位




    // int a = 1;
    // for (a = 1; a <= 20; a++)
    // {
    //     printf("%d\t",a);

    //     if (a%5 == 0)
    //     {
    //         printf("\n");
    //     }
        
    // }
    
    
    



    return 0;
}   

