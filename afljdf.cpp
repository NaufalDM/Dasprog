#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef long long ll;

int main()
{
    int angka[11];
    int total = 0;
    for(int i= 0; i<11; i++)
    {
    	scanf("%d", &angka[i]);
    	total += angka[i];
	}
	printf("%d",total);
    return 0;
}
