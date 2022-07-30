#include <stdio.h>
#include <stdbool.h>

int main(){
		int number = 37;
		bool flag = 1;
    	for(int i = 2;i <= number / 2;i++)
        {
        	if(number % i == 0)
        	{
        		flag = 0;
			}
		}
		
		if (flag)
		{
			printf("%d\n",number);
		}
		else
		{
			printf("%d不false",number);
		}
		return 0;
}