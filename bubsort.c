#include<stdio.h>
int main()
{
	int data[10] = {64, 25, 12, 22, 11, 90, 37, 8, 51, 73};
	int n = 10;
	for(int i = 0; i< n-1; i++)
	{
		for(int j = 0; j< n-1-i ; j++)
		{
			if(data[j] < data[j+1])
			{
				int temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");
}
