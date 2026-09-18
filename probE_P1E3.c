#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a, &b);

    int c, hasil;
    scanf("%d", &c);

    switch(c)
    {
        case 1: hasil = a << b ; break;
        case 2: hasil = a >> b ; break;
        case 3: hasil = a&b ; break;
        case 4: hasil = a|b ; break;
        case 5: hasil = a^b ; break;
    }

    printf("%d", hasil);

    return 0;
}