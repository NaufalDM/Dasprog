#include <stdio.h>

int main() {
    int n, m1, m2, m3;
    int total, sisa;

    scanf("%d", &n);

    if (n < 1 || n > 3) {
        printf("Jumlah misi harus antara 1 dan 3!");
        return 0;
    }

    total = 0;

    if (n == 1) {
        scanf("%d", &m1);

        if (m1 == 1) total = 30;
        else if (m1 == 2) total = 45;
        else if (m1 == 3) total = 90;
        else {
            printf("Kesulitan yang kamu masukkan tidak valid! Program berhenti.");
            return 0;
        }
    }

    if (n == 2) {
        scanf("%d%d", &m1, &m2);

        if (m1 == 1) total += 30;
        else if (m1 == 2) total += 45;
        else if (m1 == 3) total += 90;
        else { printf("Kesulitan yang kamu masukkan tidak valid! Program berhenti."); return 0; }

        if (m2 == 1) total += 30;
        else if (m2 == 2) total += 45;
        else if (m2 == 3) total += 90;
        else { printf("Kesulitan yang kamu masukkan tidak valid! Program berhenti."); return 0; }
    }

    if (n == 3) {
        scanf("%d%d%d", &m1, &m2, &m3);

        if (m1 == 1) total += 30;
        else if (m1 == 2) total += 45;
        else if (m1 == 3) total += 90;
        else { printf("Kesulitan yang kamu masukkan tidak valid! Program berhenti."); return 0; }

        if (m2 == 1) total += 30;
        else if (m2 == 2) total += 45;
        else if (m2 == 3) total += 90;
        else { printf("Kesulitan yang kamu masukkan tidak valid! Program berhenti."); return 0; }

        if (m3 == 1) total += 30;
        else if (m3 == 2) total += 45;
        else if (m3 == 3) total += 90;
        else { printf("Kesulitan yang kamu masukkan tidak valid! Program berhenti."); return 0; }
    }

    sisa = 180 - total;

    printf("Total waktu yang dihabiskan: %d menit\n", total);
    printf("Sisa waktu: %d menit\n", sisa);

    if (sisa >= 30)
        printf("Benerin mobil kayanya asik di AutoWin. Anjay mulus!");
    else if (sisa >= 15)
        printf("Makan dulu gasih brow di Klenger Noodles. Perut kenyang hidup tenang!");
    else
        printf("Jangan sok jago, mampus kan ga cukup waktunya. ang ang ang bye bye real life.");

    return 0;
}