#include <stdio.h>
int main()
{
	char an ,op ,bn;
	scanf(" %c %c %c",&an,&op ,&bn);
	int angka1 = an;
	int angka2 = bn;
	int hasil = 0;
	
	
	if (angka1>=97 && angka1<=122)
	{
		angka1 = angka1-96;
	}
	if (angka2>=97 && angka2<=122)
	{
		angka2 = angka2-96;
	}
	if (angka1>=65 && angka1 <=90)
	{
		angka1 = angka1-64+26;
	}
	if (angka2>=65 && angka2<=90)
	{
		angka2 = angka2-64+26;
	}
	
	if (op=='+')
	{
		hasil=angka1 + angka2;
	}
	else if(op=='-')
	{
		hasil=angka1 - angka2;
	}
	else if(op=='*')
	{
		hasil=angka1*angka2;
	}
	else if(op=='/')
	{
		hasil=angka1 / angka2;
	}
	else if(op=='%')
	{
		hasil=an%bn;
	}
	
	if (hasil<1)
	{
		hasil = 52+hasil;
	}
	
	if (hasil>52)
	{
		hasil=hasil-52;
	}
	
	if (hasil==0)
	{
		hasil = 90;
	}
	
	if(hasil<27)
	{
		hasil= hasil + 96;
	}
	
	else if(hasil>=27 && hasil<53)
	{
		hasil= hasil+38;
	}
    
    printf("%c", hasil);
	return 0;
}
