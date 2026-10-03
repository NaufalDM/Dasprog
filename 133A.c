#include<stdio.h>
int main()
{
	char word[105];
	scanf("%s", word);
	for(int i = 0 ; word[i] != '\0'; i++)
	{
		if(word[i] == 'H' || word[i] == 'Q' || word[i] == '9')
		{
			printf("YES");
			return 0;
		}
	}
	printf("NO");
}
