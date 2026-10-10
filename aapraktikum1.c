#include<stdio.h>
#include<string.h>

int main()
{
	int n,m;
	scanf("%d %d", &n,&m);
	int a[1005];
	int b[1005];
	
	for(int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i< m; i++)
	{
		scanf("%d", &b[i]);
		for(int j = 0; j< n; j++)
		{
			if (a[j] == b[i])
			{
				a[j] = 0;
			}
		}
	}
	
	int total = 0;
	for(int i = 0; i < n; i++)
	{
		total += a[i];
	}
	
	printf("%d", total);
	
	return 0;
}

