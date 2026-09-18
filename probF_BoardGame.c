#include <stdio.h>

int main() {
    long long xa, xb, xc, xd, xe, xf, xg, xh, xi;

    if (scanf("%lld %lld %lld %lld %lld %lld %lld %lld %lld", 
        &xa, &xb, &xc, &xd, &xe, &xf, &xg, &xh, &xi) != 9) {
        return 0;
    }

    int a = xa % 3;
    int b = xb % 3;
    int c = xc % 3;
    int d = xd % 3;
    int e = xe % 3;
    int f = xf % 3;
    int g = xg % 3;
    int h = xh % 3;
    int i = xi % 3;

    printf("%d | %d | %d\n", a, b, c);
    printf("%d | %d | %d\n", d, e, f);
    printf("%d | %d | %d\n", g, h, i);

    int win1 = 0;
    int win2 = 0;

    //baris
    if (a != 0 && a == b && b == c) { if (a == 1) win1++; else if (a == 2) win2++; }
    if (d != 0 && d == e && e == f) { if (d == 1) win1++; else if (d == 2) win2++; }
    if (g != 0 && g == h && h == i) { if (g == 1) win1++; else if (g == 2) win2++; }

    //kolom
    if (a != 0 && a == d && d == g) { if (a == 1) win1++; else if (a == 2) win2++; }
    if (b != 0 && b == e && e == h) { if (b == 1) win1++; else if (b == 2) win2++; }
    if (c != 0 && c == f && f == i) { if (c == 1) win1++; else if (c == 2) win2++; }

    //diagonal
    if (a != 0 && a == e && e == i) { if (a == 1) win1++; else if (a == 2) win2++; }
    if (c != 0 && c == e && e == g) { if (c == 1) win1++; else if (c == 2) win2++; }

    int total_win = win1 + win2;

    if (total_win == 0) 
    {
        printf("Yahh kurang beruntung nih, gaada kemenangan!\n");
    } 
    else if (total_win == 1) 
    {
        if (win1 == 1) {
            printf("Keberuntungan ada di kamu, selamat Arya\n");
        } else {
            printf("Keberuntungan ada di kamu, selamat Andi\n");
        }
    }
    else 
    {
        printf("Terjadi alomani dua kemenangan!\n");
        if (win1 > 0 && win2 > 0) {
            printf("Lah dua duanya menang, selamat Arya dan Andi\n");
        } else if (win1 >= 2) {
            printf("Lah menang dua kali kamu Arya\n");
        } else if (win2 >= 2) {
            printf("Lah menang dua kali kamu Andi\n");
        }
    }

    return 0;
}