#include <stdio.h>
void jolly(void); /* ANSI/ISO C����ԭ�� */
void deny(void);

int main(void)
{	
jolly();
		jolly();
		jolly();
		deny();
	return 0;
}


void jolly(void) /* �������忪ʼ */
	{
		printf("For he's a jolly good fellow!\n\n");
	}
	
void deny(void) /* �������忪ʼ */
	{
		printf("Which nobody can deny!\n");
	}
	
