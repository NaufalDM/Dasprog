#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	char nama[100][25];
	int jumlah[100][4];
	
	for(int i = 0; i< n;i++)
	{
		int m;
		scanf("%d %s", &m, nama[i]);
		for(int k = 0; k<4; k++)
		{
			jumlah[i][k] = 0;
		}
		
		for(int j = 0; j<m; j++)
		{
			char telp[15];
			scanf("%s", telp);
			
			int sama = 1, naik = 1, turun = 1;
			int sebelum = -1;
			for(int p = 0; telp[p] != '\0'; p++)
			{
				if(telp[p] != '-')
				{
					if(sebelum != -1)
					{
						if(telp[p]!= sebelum) sama = 0;
						if(telp[p] > sebelum) turun = 0;
						if(telp[p] < sebelum) naik = 0;
					}
					sebelum = telp[p];
				}
			}
			if(sama) jumlah[i][0]++;
			else if(turun) jumlah[i][1]++;
			else if(naik) jumlah[i][2]++;
			else jumlah[i][3]++;
		}
	}
	
	for(int k = 0; k<4; k++)
	{
		int maks = 0;
		for(int i  = 0; i<n; i++)
		{
			if(jumlah[i][k] > maks) maks = jumlah[i][k];
		}
		
		if(k == 0) printf("Cari kontak keluarga, hubungi ");
		else if(k == 1) printf("Cari kontak sahabat, hubungi ");
		else if(k == 2) printf("Cari kontak cowok, hubungi ");
		else printf("Cari kontak cewek, hubungi ");
		
		int pertama = 1; 
		for(int i = 0; i<n; i++)
		{
			if(jumlah[i][k] == maks	)
			{
				if(pertama == 0)
				{
					printf(", ");
				}
				printf("%s", nama[i]);
				pertama = 0;
			}
		}
		printf("\n");
	}
}
