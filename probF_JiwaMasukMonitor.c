#include <stdio.h>

int main() {
    int jumlah;
    int k1 = 0, k2 = 0, k3 = 0;
    int total = 0, sisa;

    scanf("%d", &jumlah);

    if (jumlah < 1 || jumlah > 3) {
        printf("Jumlah misi harus antara 1 dan 3!");
        return 0;
    }

    if (jumlah >= 1) scanf("%d", &k1);
    if (jumlah >= 2) scanf("%d", &k2);
    if (jumlah == 3) scanf("%d", &k3);

    if (k1 == 1) total += 30;
    else if (k1 == 2) total += 45;
    else if (k1 == 3) total += 90;
    else {
        printf("Kesulitan yang kamu masukkan tidak valid! Program berhenti.");
        return 0;
    }

    if (jumlah >= 2) {
        if (k2 == 1) total += 30;
        else if (k2 == 2) total += 45;
        else if (k2 == 3) total += 90;
        else {
            printf("Kesulitan yang kamu masukkan tidak valid! Program berhenti.");
            return 0;
        }
    }

    if (jumlah == 3) {
        if (k3 == 1) total += 30;
        else if (k3 == 2) total += 45;
        else if (k3 == 3) total += 90;
        else {
            printf("Kesulitan yang kamu masukkan tidak valid! Program berhenti.");
            return 0;
        }
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