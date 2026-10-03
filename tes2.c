#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	int angka[t];
	int index = t-1;
	for(int i = 0; i< t; i++)
	{
		scanf("%d", &angka[i]);
	}
	for(index; index>= 0 ; index--)
	{
		printf("%d \n", angka[index]);
	}
	return 0;
}	
