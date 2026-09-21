#include<stdio.h>
int main()
{
    double harga;
    char siswa;

    printf("Total purchases : $");
    scanf("%lf", &harga );

    printf("Are you a student?(y/n) : ");
    scanf(" %c",&siswa);

    if(siswa=='y' || siswa=='Y')
    {
        double diskon = harga*20/100;
        printf("Student's discount (20%%) : $%.2f \n" , diskon);
        harga = harga*80/100;
        printf("Discounted total : $%.2f\n", harga);

        double tax = harga *5/100;
        printf("Sales tax (5%%) : $%.2f\n", tax);
        double total = harga + tax;
        printf("Total : $%.2f\n", total);

    }
    
    else
    {
        double tax = harga *5/100;
        printf("Sales tax (5%%) : $%.3f\n", tax);
        double total = harga + tax;
        printf("Total : $%.2f\n", total);
    }    
    return 0 ;
}
