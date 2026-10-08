#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	int angka[100][100] ={0};
	angka[0][0] = 1;
	int nilai = 2;
	int turun =1;
	int i=0, j=1;
	
	while(nilai<=n*n)
	{
		angka[i][j] = nilai++;
			if(turun == 1)
			{
				j--;
				i++;
				if(i>=n)
				{
					i = n-1;
					j+= 2;
					turun = 0;
				}
				else if(j<0)
				{
					j =0;
					turun = 0;
				}
			}
			else 
			{
				j++;
				i--;
				if(j>=n)
				{
					i+=2;
					j = n-1;
					turun = 1;
				}
				else if(i< 0)
				{
					i = 0;
					turun = 1;
				}
			}
			
	}
	
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n; j++)
		{
			if(j != 0)
			{
				printf(" ");
			}
			printf("%d", angka[i][j]);
		}
		printf("\n");
	}
}
