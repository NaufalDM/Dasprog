#include <stdio.h>
#include <math.h>

int main() {
    double principal,annualRate, monthlyRate,payment, interest,principalPaid,balance;
    int n;

    printf("Principal: ");
    scanf("%lf", &principal);
    printf("Annual interest rate (%%): ");
    scanf("%lf", &annualRate);
    printf("Term (months): ");
    scanf("%d", &n);

    monthlyRate = annualRate/100/12;

    payment = principal*monthlyRate / (1 - pow(1+ monthlyRate, -n));// rumus di soal 1 chapter 3

    payment = round(payment *100)/100;

    balance = principal;

    printf("\nPayment\tInterest\tPrincipal\tBalance\n");

    for (int i=1; i<=n; i++) 
    {
        interest = round(balance * monthlyRate * 100) / 100;

        if (i == n) 
        {
            principalPaid = balance;
            payment = interest + principalPaid;
        } 
        else 
        {
            principalPaid = payment - interest;
        }

        balance = round((balance - principalPaid) * 100) / 100;

        printf("%d\t%.2f\t        %.2f\t        %.2f\n", i, interest, principalPaid, balance);
    }
    printf("\nFinal payment: %.2f\n", payment);

    return 0;
}