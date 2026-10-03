#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d", &n, &m);
	int angka[n][m];
	
	for(int i = 0; i< n ; i++)
	{
		for(int j = 0; j< m; j++)
		{
			scanf("%d", &angka[i][j]);
		}
		printf("\n");
	}
	
	for (int k = 0 ; k<n; k++)
	{
		for( int l = m-1; l>= 0; l--)
		{
			printf("%d ", angka[k][l]);
		}
		printf("\n");
	}
}
