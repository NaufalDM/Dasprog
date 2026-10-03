#include<stdio.h>
int main()
{
	int n,m,x,y;
	scanf("%d %d", &n, &m);
	char slot[n][m];
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j< m ; j++)
		{
			scanf(" %c", &slot[i][j]);
		}
	}
	
	scanf("%d %d", &x,&y);
	
	int aman = 1;
	for(int i = x-2; i<=x; i++)
	{
		for(int j = y-2; j<=y; j++)
		{
			if(i == x-1 && j == y-1)
			{
				continue;
			}
			if(i < 0 || i >= n || j < 0 || j >= m)
			{
				continue;
			}
			if(slot[i][j] != 'x')
			{
				aman = 0;
			}
		}
	}
	
	if(aman == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
}
