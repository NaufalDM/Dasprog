#include<stdio.h>
int main()
{
    int n, hasil;
    scanf("%d",&n);

    hasil = (n*(n+1)/2) * (n*(n+1)/2);

    printf("%d", hasil);

    return 0;
}