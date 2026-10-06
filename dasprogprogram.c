#include<stdio.h>

int balik(int n)
{
	int hasil = 0;
	while(n > 0)
	{
		hasil = hasil * 10 + n % 10;
		n /= 10;
	}
	return hasil;
}
int prima(int n)
{
	if(n < 2)
	{
		return 0;
	}
	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int palindrom(int n)
{
	return n == balik(n);
}

int main()
{
	int pilihan, n;
	
	printf("Pilih program:\n");
	printf("(1) Balik bilangan\n");
	printf("(2) Cek prima\n");
	printf("(3) Cek palindrom\n");
	printf("(4) Keluar\n");
	printf("Pilihan=> ");
	scanf("%d", &pilihan);
	
	while(pilihan != 4)
	{
		if(pilihan >= 1 && pilihan <= 3)
		{
			printf("Masukkan bilangan=> ");
			scanf("%d", &n);
			
			if(pilihan == 1)
			{
				printf("Hasil balik: %d\n", balik(n));
			}
			else if(pilihan == 2)
			{
				if(prima(n))
				{
					printf("%d adalah prima\n", n);
				}
				else
				{
					printf("%d bukan prima\n", n);
				}
			}
			else
			{
				if(palindrom(n))
				{
					printf("%d adalah palindrom\n", n);
				}
				else
				{
					printf("%d bukan palindrom\n", n);
				}
			}
		}
		else
		{
			printf("Pilihan tidak valid\n");
		}
		
		printf("\nPilih program:\n");
		printf("(1) Balik bilangan\n");
		printf("(2) Cek prima\n");
		printf("(3) Cek palindrom\n");
		printf("(4) Keluar\n");
		printf("Pilihan=> ");
		scanf("%d", &pilihan);
	}
	
	printf("Program selesai.\n");
	return 0;
}
