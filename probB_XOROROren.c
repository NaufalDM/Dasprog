#include<stdio.h>
int main()
{
    char kode;
    long n,m = 0, hasil;
    
    scanf(" %c", &kode);
    if (kode=='d'||kode=='e')
    {
    scanf("%c",&n);
    }
    else
    {
    scanf("%ld %ld",&n ,&m);
    }

    switch(kode)
    {
        case 'a': hasil = n ^ m; break; // XOR pakai tanda ^
        case 'b': hasil = n | m; break; // or pakai tanda |
        case 'c': hasil = n & m; break; // and pakai &
        case 'd': hasil = n << 2; break; // shift ke kiri pakai tanda <<
        case 'e': hasil = n >> 2; break; // shift ke kanan pakai tanda >>
    }
    
    long digit = 0;
    long hsementara = hasil;
    if (hsementara==0)// jika hasilnya 0 > biner = 0, 1 digit
    {
        digit = 1;
    }
    else
    {
        while (hsementara > 0)// hasil lebih dari 0
        {
            digit++;
            hsementara >>= 1; // menggeser bit ke kanan sampai bit habis, untuk mengetahui jumlah bit
        }
    }

    if(digit%2==0)
    {
        printf("Meonggg, Kucing Oren penguasa dunia\n");
    }
    else
    {
        printf("Miawww, Kucing Oren kecewa :(\n");
    }

     return 0;
}