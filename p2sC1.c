#include<stdio.h>
int main()
{
	long long x, total = 0;
	int y;
	scanf("%lld %d", &x, &y);
	while(x>1 && y>0)
	{
			if(x%2 != 0)
			{
				total++;
				x--;
			}
			x/=2;
			total++;
		 	y--;
	}
	total += x-1;
	printf("%lld\n", total);
}
