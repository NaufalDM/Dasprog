#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		char kerjaan[55];
		scanf("%s", kerjaan);
		char diskip[55] = "0";
		int beraturan = 1;
		int posisi = 0;
		int poskip = 0;
		
		for(int i = 0; i< n-1; i++)
		{
			if(n<=1)
			{
				break;
			}
			if(kerjaan[i] > kerjaan[i+1])
			{
				diskip[poskip] = kerjaan[i];
				posisi = i;
				poskip++;
			}
		}
		
		if(diskip[0] != '0'){
		for(int i = 0; i<posisi-1;i++)
		{
			for(int j = 0; j<= poskip ; j++)
			{
				if(kerjaan[i] == diskip[j])
				{
					beraturan = 0;
					break;
				}
			}
		}
	}
		if(beraturan == 1)
		{
			printf("AMAN\n");
		}
		else
		{
			printf("SKORS\n");
		}
	}
}
