#include<stdio.h>
int main()
{
	int N,A,B,C;
	scanf("%d %d %d %d", &N, &A,&B,&C);
	int X = N % A - B;
	int Y = N/C - B;
	
	if (X>0 && Y>0)
	{
		printf("Poppi di Hutan");
	}
	else if (X<0 && Y>0)
	{
		printf("Poppi di Sungai");
	}
	else if (X<0 && Y<0)
	{
		printf("Poppi di Tambang");
	}
	else if (X>0 && Y<0)
	{
		printf("Poppi di Kebun Sawit");
	}
	else if (X==0 && Y==0)
	{
		printf("bersama Masterpon");
	}
	else if (X==0 || Y==0)
	{
		printf("Perbatasan");
	}
	return 0;
}
