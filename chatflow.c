#include <stdio.h>
#include <math.h>

int main() {
    int weekday, malam, weekend, tax, total ,rrta;

    printf("Weekday minutes : ");
    scanf("%d", &weekday);
    printf("Night minutes : ");
    scanf("%d", &malam);
    printf("Weekend minutes : ");
    scanf("%d", &weekend);

    int pretax = 3999;

    if (weekday > 600) 
    {
        pretax = pretax + (weekday - 600) * 40;
    }

    int totalm = weekday+ malam + weekend;

    if (totalm == 0)
    {
        rrta = 0;
    }
    else
    {
        rrta = (int)round((double) pretax / totalm);
    }

    tax = (int)round(pretax * 5.25 / 100.0);

    total = pretax + tax;

    printf("Pretax bill : $%.2f\n", pretax/100.0);
    printf("Average cost : $%.2f per minute\n", rrta / 100.0);
    printf("Taxes : $%.2f\n", tax/ 100.0);
    printf("Total bill : $%.2f\n" , total /100.0);

    return 0;
}