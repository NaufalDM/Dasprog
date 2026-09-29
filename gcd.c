#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d", &n, &m);
	
	while(1)
	{
		if(m%n!=0)
		{
			int temo = m;
			m = n;
			n = temo % n; 
		}
		else
		break;
	}
	printf("%d", n);
	return 0;
}
