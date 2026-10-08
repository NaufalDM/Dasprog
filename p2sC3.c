#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char word[55];
		scanf("%s", word);
		int panjang = strlen(word);
		int beda = 0;

		for(int i = 1; i < panjang/2; i++)
		{
			if(word[i] != word[0])
			{
				beda = 1;
				break;
			}
		}

		if(beda)
			printf("Perfectly balanced, as all things should be\n");
		else
			printf("There was no other way\n");
	}
	return 0;
}
