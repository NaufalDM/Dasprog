#include<stdio.h>
#include<string.h>
int main()
{
	char n[] = "192433669";
	int panjang = strlen(n);
	for(int i = 0; i < panjang -1; i++)
	{
		for(int j = 0; j<panjang -1 -i; j++)
		{
			if(n[j] < n[j+1])
			{
				char temp = n[j];
				n[j] = n[j+1];
				n[j+1] = temp;
			}
		}
	}
	printf("%s", n);
	
}
