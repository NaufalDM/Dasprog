#include<stdio.h>
int main()
{
	char t1,t2;
	int f1, f2, damage1 = 0, damage2 = 0;
	scanf("%c %d %c %d", &t1, &f1, &t2, &f2);
	
	if(t1 == 'L')
	{
		damage1 = 100;
	}
	else if(t1 == 'M')
	{
		damage1 = 250;
	}
	else if(t1 == 'H')
	{
		damage1 = 450;
	}
	
	if(t2 == 'L')
	{
		damage2 = 100;
	}
	else if(t2 == 'M')
	{
		damage2 = 250;
	}
	else if(t2 == 'H')
	{
		damage2 = 450;
	}
	
	if (f1 + 5<=f2)
	{
		damage1 = damage1 * 1.5;
	}
	else if(f2 + 5<=f1)
	{
		damage2 = damage2 * 1.5;
	}
	
	if(t1==t2 && f1==f2)
	{
		printf("TRADE HIT %d", damage1);
	}
	else if(f1<f2)
	{
		printf("PLAYER 1 %d", damage1);
	}
	else if(f2<f1)
	{
		printf("PLAYER 2 %d", damage2);
	}
	else if(f2 == f1 && t2!=t1)
	{
		if(damage1>damage2)
		{
			printf("PLAYER 1 %d", damage1);
		}
		else
		{
			printf("PLAYER 2 %d", damage2);
		}
	}
	
}
