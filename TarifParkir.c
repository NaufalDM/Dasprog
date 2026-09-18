#include<stdio.h>
int main()
{
	int m,v,harga;
	scanf("%d %d", &m, &v);
	int jam = m/60;
	if(m%60!=0)
	{
		jam++;
	}
	
	if( jam==1)
	{
		harga = 3000;
	}
	
	if(jam>1)
	{
		harga = 2000*(jam-1)+3000;
	}
	
	if (harga>25000)
	{
		harga=25000;
	}
	
	if (v==1)
	{
		harga= harga + 1000;
	}
	
	printf("%d", harga);
	return 0;
}
