#include <stdio.h>
int main()
{
    int a,b;

    scanf("%d %d", &a, &b);

    if (a>600&&b>100000000)
    {
        printf("GAK MASUK AKAL\n");
    }
    else if (a>600||b>100000000)
    {
        printf("GUWENDENG\n");
    }

    if(b>=a*15000)
    {
        printf("PAHAM!\n");
    }
    else
    {
        printf("Tapi tunggu dulu ;D\n");
    }

    return 0;

}