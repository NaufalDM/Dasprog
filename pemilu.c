#include <stdio.h>

#define TPS 5
#define KANDIDAT 4

void tampil_tabel(int suara[TPS][KANDIDAT])
{
    printf("%-10s", "Precinct");
    for (int j = 0; j < KANDIDAT; j++)
    {
        printf("Candidate %c  ", 'A' + j);
    }
    printf("\n");

    for (int i = 0; i < TPS; i++)
    {
        printf("%-10d", i + 1);
        for (int j = 0; j < KANDIDAT; j++)
        {
            printf("%11d  ", suara[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void analisa(int suara[TPS][KANDIDAT])
{
    int total[KANDIDAT] = {0};
    int total_semua = 0;

    tampil_tabel(suara);
    for (int i = 0; i < TPS; i++)
    {
        for (int j = 0; j < KANDIDAT; j++)
        {
            total[j] += suara[i][j];
            total_semua += suara[i][j];
        }
    }

    printf("%-12s %-10s %s\n", "Candidate", "Votes", "Percentage");
    for (int j = 0; j < KANDIDAT; j++)
    {
        double persen = 100.0 * total[j] / total_semua;
        printf("%-12c %-10d %.2f%%\n", 'A' + j, total[j], persen);
    }
    printf("Total votes cast: %d\n\n", total_semua);

    for (int j = 0; j < KANDIDAT; j++)
    {
        if (total[j] * 2 > total_semua)
        {
            printf("Candidate %c is the winner with more than 50%% of the votes.\n", 'A' + j);
            return;
        }
    }
    int pertama = 0, kedua = -1;
    for (int j = 1; j < KANDIDAT; j++)
    {
        if (total[j] > total[pertama])
        {
            kedua = pertama;
            pertama = j;
        }
        else if (kedua == -1 || total[j] > total[kedua])
        {
            kedua = j;
        }
    }
    printf("No candidate received more than 50%% of the votes.\n");
    printf("There will be a runoff between Candidate %c and Candidate %c.\n",
           'A' + pertama, 'A' + kedua);
}

int main()
{
    int suara[TPS][KANDIDAT] = {
        {192, 48,  206, 37},
        {147, 90,  312, 21},
        {186, 12,  121, 38},
        {114, 21,  408, 39},
        {267, 13,  382, 29}
    };
    printf("===== RUN 1: Data asli =====\n\n");
    analisa(suara);

    suara[3][2] = 108;
    printf("\n\n===== RUN 2: Candidate C = 108 suara di Precinct 4 =====\n\n");
    analisa(suara);

    return 0;
}