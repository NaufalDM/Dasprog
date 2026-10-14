#include <stdio.h>

#define PANJANG 12

int main()
{
    int kode[PANJANG];
    int jumlah_ganjil = 0, jumlah_genap = 0;
    int langkah1, langkah2, check_digit;

    printf("Masukkan 12 digit barcode (pisahkan dengan spasi): ");
    for (int i = 0; i < PANJANG; i++)
    {
        scanf("%d", &kode[i]);
    }

    for (int i = 0; i < PANJANG - 1; i += 2)
    {
        jumlah_ganjil += kode[i];
    }
    langkah1 = jumlah_ganjil * 3;

    for (int i = 1; i < PANJANG - 1; i += 2)
    {
        jumlah_genap += kode[i];
    }
    langkah2 = langkah1 + jumlah_genap;

    if (langkah2 % 10 == 0)
        check_digit = 0;
    else
        check_digit = 10 - (langkah2 % 10);

    printf("\nBarcode: ");
    for (int i = 0; i < PANJANG; i++)
    {
        printf("%d ", kode[i]);
    }
    printf("\n");

    printf("Hasil langkah 1 (jumlah posisi ganjil x 3) : %d\n", langkah1);
    printf("Hasil langkah 2 (ditambah posisi genap)    : %d\n", langkah2);
    printf("Check digit hasil hitungan                 : %d\n", check_digit);
    printf("Digit terakhir barcode                     : %d\n", kode[PANJANG - 1]);

    if (check_digit == kode[PANJANG - 1])
        printf("\nHasil: validated\n");
    else
        printf("\nHasil: error in barcode\n");

    return 0;
}