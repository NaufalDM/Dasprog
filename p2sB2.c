#include<stdio.h>
int angka[1000][1000];
int baru[1000][1000];	
int main()
{
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i<t; i++)
	{
		for(int j = 0; j<t; j++)
		{
			scanf("%d", &angka[i][j]);
		}
	}
	
	char perintah[10];
	long long total= 0;
	while(1)
	{
		scanf("%s", perintah);
		if(perintah[0] == 'q')
		{
			break;
		}
		else
		{
			long long k;
			scanf("%lld", &k);
			total += k;
		}
	}
	total %= 4;
	while(total--)
	{
		for(int i = 0; i<t; i++)
		{
			for(int j = 0; j<t; j++)
			{
				baru[i][j] = angka[t-1-j][i];
			}
		}
		for(int i = 0; i<t; i++)
		{
			for(int j = 0; j<t; j++)
			{
				angka[i][j] = baru[i][j];
			}
		}
	}
	
	
	for(int i = 0; i<t; i++)
	{
		for(int j = 0; j<t; j++)
		{
			printf("%d ", angka[i][j]);
		}
		printf("\n");
	}
}

