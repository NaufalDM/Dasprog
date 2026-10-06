#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	int angka[100][100] ={0};
	angka[0][0] = 1;
	int nilai = 2;
	int naik = 0, turun =1;
	for(int i = 0; i<n ; i++)
	{
		for(int j = 1; j<n ; j++)
		{
			if(turun = 1)
			{
				angka[i][j] = nilai;
				nilai++;
				j--;
				i++;
			}
			else 
			{
				angka[i][j] = nilai;
				nilai++;
				j++;
				i--;
			}
			if(j<0)
			{
				i++;
				naik =1;
				turun =0;
				continue;
			}
			else if(i<0)
			{
				
			}
		}
	}
	
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n; j++)
		{
			printf("%d", angka[i][j]);
		}
		printf("\n");
	}
}
