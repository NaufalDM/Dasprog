#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d", &a,&b);
	
	int x = a^b;
	int tota = 0;
	
	while(x> 0)
	{
		if(x%2 == 1)
		{
			tota++;
		}
		x /=2;
	}
	
	printf("%d",tota);
}
