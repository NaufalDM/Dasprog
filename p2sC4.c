#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	char s[27][105];
	char h1[26];
	
	for(int i = 0; i<t; i++)
	{
		scanf(" %105[^\n]", s[i]);
		h1[i] = s[i][0];
		if(h1[i] <= 'z' && h1[i] >= 'a')
		{
			h1[i] = h1[i] - 'a' +'A';
		}
	}
	
	for(int i =0; i< t; i++)
	{
		printf("%s telah hilang...\n", s[i]);	
	}
	
	int salah = 0, lompat = 0;
	for(int i = 0; i<t-1; i++)
	{
		if(h1[i] >= h1[i+1])
		{
			salah = 1;
			break;
		}
		else if(h1[i] +1 != h1[i+1])
		{
			lompat = 1;
		}
	}
	if(salah ==1)
	{
		printf("Apakah Juumonji melakukan kesalahan?\n");
		return 0;
	}
	
	if(lompat == 0)
	{
		printf("Juumonji mungkin akan mencuri barang dengan huruf %c\n", h1[t-1] +1);
		return 0;
	}
	
	printf("Masih ada barang dengan huruf ");
	for(int i = 0; i<t-1;i++)
	{
		for(char c = h1[i] + 1; c < h1[i+1] ; c++)
		{
			printf("%c", c);
		}
	}
	printf(" yang hilang!\n");
}
