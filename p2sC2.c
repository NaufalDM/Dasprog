#include<stdio.h>
int main()
{
	int n;
	long long h, a;
	scanf("%d %lld", &n, &h);
	int angka[50] = {0};
	int letak = 0;
	while(n--)
	{
		scanf("%lld", &a);
		int prima = 1;
		if(a<2)
		{
			prima = 0;
		}
		for(long long i = 2; i*i <= a; i++)
		{
			if(a%i == 0)
			{
				prima = 0;
				break;
			}
		}
		if(prima == 1)
		{
			angka[letak] = a;
			letak++;
		}
	}
	
	if(letak == 0)
	{
		printf("Wah angkanya ngga cocok nih!");
		return 0;
	}
	int total = 0;
	for(int i = 0; i< letak; i++)
	{
		total += angka[i];
	}
	
	if(total < h)
	{
		printf("Waduh angkanya kurang nih, minta Bedul dulu deh!");
		return 0;
	}
	else
	{
		printf("Wah angkanya cocok nih! Angkanya adalah ");
		int tot = 0;
		for(int i = 0; i<letak; i++)
		{
			printf("%d", angka[i]);
			tot += angka[i];
			if(tot>=h)
			{
				return 0;
			}
			else
			{
				printf(" ");
			}
		}
	}
}
