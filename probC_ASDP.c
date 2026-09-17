#include<stdio.h>
int main()
{
    long long angka, info=0;

    scanf ("%lld", &angka);

    if(angka%2!=0)
    {
        info=angka%2 + info*10;
    }
    if(angka%4!=0)
    {
        info=angka%4 + info*10;
    }
    if(angka%7!=0)
    {
        info=angka%7 + info*10;
    }
    if(angka%9!=0)
    {
        info=angka%9 + info*10;
    }

    printf("aku suka %d dasar pemrograman", info);
}