#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	
	for(int i = 2 ; i <= t ; i++)
	{
		int prima = 1;
		for(int j = 2; j<i ; j++)
		{
			if(i%j == 0)
			{
				prima = 0;
				break;
			}
		}
		if(prima == 1)
		{
			printf("* ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}
