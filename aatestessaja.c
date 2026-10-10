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
		char sudah[55] = "0";
		int beraturan = 1;
		int posisi[55];
		int poskip = 0;
		
		for(int i = 0; i<n; i++)
		{
			sudah[i] = kerjaan[i];
			posisi[i] = i;
			for(posisi[i]; posisi[i] < n ; posisi[i]++)
			{
				if(sudah[i+1] != '\0')
				{
					for(int j = 0; j<n; j++)
					{
						if(sudah[i] == kerjaan[posisi[i]])
						{
							beraturan = 0;
							break;
						}
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
