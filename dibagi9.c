#include<stdio.h>
int main()
{
    char digit;
    int sum = 0;
    int n;
    while(true)
    {
        scanf("%c", &digit);
        if(digit == '\n') // ketika enter, menandakan akhir dari angka
        break;

        sum = sum +(int)digit - (int) '0'; // karena scan char, maka intnya jadi ascii, untuk mengembalikan ke desimal, kurangi ascii dari 0
        printf("%c ", digit);
    }
    printf(" \njumlah = %d\n", sum);

    if(sum % 9 == 0)
    {
        printf("Habis dibagi 9\n");
    }
    else{
printf("Tidak habis dibagi 9");
    }
}