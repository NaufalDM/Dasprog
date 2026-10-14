#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	
	int tarif[105];
	for(int i = 1; i<= n; i++)
	{
		scanf("%d", &tarif[i]);
	}
	
	int berat[2005];
	for(int i = 1; i <= m; i++)
	{
		scanf("%d", &berat[i]);
	}
	
	
	int sibuk[105] = {0};
	int posisirobot[2005];
	int antrian[2005];
	
	int depan = 0, belakang = 0, antri = 0;
	long long total = 0;
	
	int jlkejadian = m*2;
	
	while(jlkejadian--)
	{
		int robot;
		scanf("%d", &robot);
		
		if(robot > 0)
		{
			int stasiun = 0;
			for(int i = 1;i<= n; i++)
			{
				if(sibuk[i] == 0)
				{
					stasiun = i;
					break;
				}
			}
			
			if(stasiun != 0)
			{
				sibuk[stasiun] = 1;
				posisirobot[robot] = stasiun;
				total += berat[robot] * tarif[stasiun]; 
			}
			else
			{
				antrian[belakang] = robot;
				belakang++;
				antri++;
			}
		}
		
		else // kejadian<0 atau robot keluar
		{
			robot = -robot;
			int stasiun = posisirobot[robot];
			
			if(antri > 0)
			{
				int robotbaru = antrian[depan];
				depan++;
				antri--;
				
				posisirobot[robotbaru] = stasiun;
				total += berat[robotbaru] * tarif[stasiun];
			}
			else
			{
				sibuk[stasiun] = 0;	
			}
		}
	}
	
	printf("%lld\n", total);
	return 0;
	
}
