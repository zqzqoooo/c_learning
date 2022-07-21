#include <stdio.h>
void jolly(void); /* ANSI/ISO C函数原型 */
void deny(void);

int main(void)
{	
jolly();
		jolly();
		jolly();
		deny();
	return 0;
}


void jolly(void) /* 函数定义开始 */
	{
		printf("For he's a jolly good fellow!\n\n");
	}
	
void deny(void) /* 函数定义开始 */
	{
		printf("Which nobody can deny!\n");
	}
	
