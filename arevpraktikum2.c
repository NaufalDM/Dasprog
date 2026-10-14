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
		int pernah[26] = {0};
		int beraturan = 1;
		
		for(int i = 0; i < n; i++)
		{
			if(i>0 && kerjaan[i] == kerjaan[i-1])
			{
				continue;
			}
			
			if(pernah[kerjaan[i] - 'A'])
			{
				beraturan = 0;
				break;
			}
			pernah[kerjaan[i] - 'A'] = 1;
		}
		
		if(beraturan == 1)
		    printf("AMAN\n");
		else
		    printf("SKORS\n");
			}
}
