#include<stdio.h>
int main ()
{
    char huruf;
    scanf(" %c", &huruf);

    int angka = huruf;

    if (angka%2==0)
    {
        printf("%c adalah genap", huruf);
    }

    else
    {
        printf("%c adalah ganjil", huruf);
    }
}