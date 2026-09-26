#include<stdio.h>
int main()
{
	int m,n, sisa = 0, sisat = 0, totwa = 0;
	long long t;
	
	scanf("%d %d %lld", &m ,&n, &t);
	int temp = t;
	
	if (t>=60)
	{
		t/=60;
		sisa = temp % 60;
		if(sisa > 20)
		{
			sisat = sisa - 20;
		}
		totwa = t*40 + sisat;
	}
	else if(t<=20)
	{
		totwa = 0;
	}
	else
	{
		totwa = temp - 20;// UNTUK 20<T<60
	}
	
	//total waktu jalan = t * 40 + sisa - 20
	

	int totmo = totwa / 4;
	
	int waktukevin = totwa - m*4 - 4;
	
	int sisaa = m + n + 1 - totmo;
	if(sisaa < 0)
	{
		sisaa = 0;
	}
	
	if(waktukevin>=0)
	{
		printf("YES! %d", sisaa);
	}
	else
	{
		printf("NO! %d", sisaa);
	}
	return 0;
	
}
