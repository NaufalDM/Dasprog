#include<stdio.h>
#include<string.h>
int main()
{
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	int baru[10];
		
	for(int i = 0;i<10; i++ )
	{
		baru[i] = 10 - i;
	}
	for(int i = 0; i< 10; i++)
	{
	printf("%d ", baru[i]);
	}
}
