#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef long long ll;

int cmp(const void *a, const void *b)
{
	int x = *(int *) a;
	int y = *(int *) b;
	return (x>y) - (x<y); // ganti posisi x dan y jika ingin dari besar ke kecil
}
int main()
{
    int angka[] = {2,5,3,7,8};
    qsort(angka,5,sizeof(int), cmp);
    for(int i = 0; i<5; i++)
    {
    	printf("%d ", angka[i]);
	}
    return 0;
}
