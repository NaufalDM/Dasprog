#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int now = 0;
	int panjang = 0;
	
	while(n>0)
	{
		if(n%2 == 1)
		{
			now++;
		}
		else
		{
			now = 0;
		}
		
		if(now>panjang)
		{
			panjang = now;
		}
		n/=2;
	}
	
	printf("%d", panjang);
}
