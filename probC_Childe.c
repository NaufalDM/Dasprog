#include <stdio.h>
#include <stdlib.h>

int main() {
    long long N, M;
    long long RC, CC, RZ, CZ;
    long long jarak, pilar, waktupilar;

    scanf("%lld %lld", &N, &M);
    scanf("%lld %lld %lld %lld", &RC, &CC, &RZ, &CZ);

    jarak = llabs(RC - RZ) + llabs(CC - CZ);

    pilar = (N < M) ? N : M;

    waktupilar = 2 * (pilar - 1);

    if (jarak <= waktupilar) {
        printf("Childe: \"EZ, gnosis itu akan jadi milikku dalam %lld detik.\"\n", jarak);
    } else {
        printf("Zhongli: \"Lemah, aku hanya perlu menggunakan Dominus Lapidis %lld kali.\"\n", pilar);
    }

    return 0;
}