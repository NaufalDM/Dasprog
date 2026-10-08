#include<stdio.h>
int main()
{
	char masukan[1005];
	scanf("%s", masukan);
	int buka = 0;
	for (int i = 0; masukan[i] != '\0'; i++)
	{
		if(masukan[i] == '(')
		{
			buka++;
		}
		else if(masukan[i] == ')')
		{
			if(buka == 0)
			{
				printf("G");
				return 0;
			}
			buka--;
		}
	}
	if(buka == 0)
	{
		printf("Y");
	}
	else
	{
		printf("G");
	}
	
}
