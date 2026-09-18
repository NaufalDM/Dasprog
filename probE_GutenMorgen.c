#include <stdio.h>
#include <math.h>

int main(void) {
    long long K;
    scanf("%lld", &K);

    // n minimal sehingga n(n+1)/2 >= K, dicari pake rumus kuadrat
    long long n = (long long)floor((-1.0 + sqrt(1.0 + 8.0 * (double)K)) / 2.0);

    // koreksi pembulatan floating point 
    if (n * (n + 1) / 2 < K) n++;
    if (n >= 1 && (n - 1) * n / 2 >= K) n--;

    long long prev = (n - 1) * n / 2;
    long long m = K - prev - 1;

    printf("%lld %lld\n", m, n);
    return 0;
}