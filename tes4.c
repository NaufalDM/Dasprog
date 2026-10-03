#include<stdio.h>
int main()
{
	char cas[100];
	scanf("%s", cas);
	for(int i = 0; cas[i] != '\0'; i++)
	{
		if(cas[i] < 91)
		{
			cas[i] += 32;
		}
		if(cas[i] == '_') 
		{
			i++;
			if(cas[i] >96)
			{
				cas[i] -= 32;
			}
		}
		printf("%c", cas[i]);
	}
}
