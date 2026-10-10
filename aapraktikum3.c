#include<stdio.h>
#include<string.h>
char s[2000005] = "0";
long long poske[2000005] = {-1};
char k[2000005] = "0";
int main()
{
	long long n;
	scanf("%lld", &n);
	scanf("%s", k);
	long long panjang = strlen(k);
	long long akhir = 20000005;
	
	for(long long z = 0; z<n; z++)
	{
		long long total = 0;
		long long posisi = 0;
		scanf("%s", s);
		for(long long i = 0; s[i] != '\0'; i++)
		{
			if(s[i] == k[posisi])
			{
				total++;
				if(posisi < panjang)
				posisi++;
			}
		}
		
		if(total == panjang)
		{
			long long terkecil = strlen(s) - panjang;
			poske[z] = terkecil;
			
			if(terkecil<akhir)
			{
				akhir = terkecil;
			}
		}
	}
	
	for(long long i = 0; i<n; i++)
	{
		if(poske[i] == akhir)
		{
			printf("%lld\n", i+1);
			return 0;
		}
	}
	printf("-1\n");
	return 0;
}
