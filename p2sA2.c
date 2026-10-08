#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int n = t;
		char word[100][105];
		int jumlah[100];
		
		for(int i = 0; i<n; i++)
		{
			scanf("%s %d", word[i], &jumlah[i]);
		}
		
		int perlu;
		scanf("%d", &perlu);
		int kosong = 1;
		
		for(int i = 0; i< n; i++)
		{
			if(jumlah[i] >= perlu)
			{
				if(kosong == 1)
				{
					printf("Items that can be bought:\n");
					kosong = 0;
				}
				printf(" - %s : %d\n", word[i], jumlah[i]);
			}
		}
		if(kosong == 1)
		{
			printf("Come on Uncle Sakura, I'm hungry!\n");
		}
}
