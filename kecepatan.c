#include<stdio.h>
int main()
{
	int jl,high = 0,med = 0,slow = 0,kec, sum = 0;
	printf("Enter total number of vehicles : ");
	scanf("%d", &jl);
	printf("Speed of vehicles : ");
	
	for(int i=0; i<jl; i++)
	{
		scanf("%d", &kec);
		if(kec>=90)
		{
			high++;
		}
		else if(kec>=50)
		{
			med++;
		}
		else 
		{
			slow++;
		}
		sum += kec;
	}
	
	printf("Number of vehicles moving at high speed : %d\n", high);
	printf("Number of vehicles moving at medium speed : %d\n", med);
	printf("Number of vehicles moving at slow speed : %d\n", slow);
	printf("Average speed of a vehicle : %.2f\n", (double)sum/jl);
	return 0;
}
