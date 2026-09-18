#include <stdio.h>
int main()
{
    long long x,y,z,t;
    scanf("%lld %lld %lld", &x, &y , &z);

    if(x<y){t=x;x=y;y=t;}
    if(y<z){t=y;y=z;z=t;}

    if(x<z){t=x;x=z;z=t;}

    printf("Stok terbanyak = %lld\n", x);
    printf("Stok terendah = %lld\n", z);

    if(x==y)
    {
        printf("Terdapat toko dengan stok yang sama : %lld", x);
    }
    else if(x==z)
    {
        printf("Terdapat toko dengan stok yang sama : %lld", x);
    }
    else if(y==z)
    {
        printf("Terdapat toko dengan stok yang sama : %lld", y);
    }
    else
    {
        printf("Tidak ada stok yang sama");
    }
    return 0;
}