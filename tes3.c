#include<stdio.h>
int main()
{
	char word[100];
	scanf("%s", word);
	int i;
	for(i = 0; word[i] != '_' ; i++)
	{
		if(word[i] < 97)
		{
			word[i] += 32;
		}
		printf("%c", word[i]);
	}
	if(word[i+1] >96)
	{		
		word[i+1]-=32;
	}
	printf("%c", word[i+1]);
	int j = i+2;
	for(j ; word[j] != '\0'; j++)
	{
		if(word[i] > 97)
		{
			word[i] += 32;
		}
		printf("%c", word[j]);
	}
}
