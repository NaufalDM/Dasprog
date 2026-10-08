#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		char kata[1000];
		scanf("%d %1000[^\n]s", &n, kata);
		long long key[1000];
		scanf("%lld", &key[0]);
		key[0] = ((key[0] % 26) + 26) % 26;
		for(int i = 1; i< n; i++)
		{
			scanf("%lld", &key[i]);
			key[i] = ((key[i] + key[i-1] % 26) +26) %26;
		}
		
		for(int i = 0; i< n; i++)
		{
			if(kata[i] >= 'a' && kata[i] <= 'z')
			{
				kata[i] = (kata[i] - 'a' + key[i])% 26 + 'a';
				
			}
			printf("%c", kata[i]);
		}
		printf("\n");
	}
}
