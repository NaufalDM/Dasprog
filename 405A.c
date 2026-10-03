#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	int go[t];
	for(int i = 0; i<t; i++)
	{
		scanf("%d", &go[i]);
	}
	
	for(int i = 0; i<t-1; i++)
	{
		for(int j = 0; j<t-1-i; j++)
		{
			if(go[j] > go[j+1])
			{
				int temp = go[j];
				go[j]= go[j+1];
				go[j+1]= temp ;
			}
		}
	}
	
	for(int i =0; i<t; i++)
	{
		printf("%d ", go[i]);
	}
}
