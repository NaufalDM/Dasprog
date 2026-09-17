#include <stdio.h>
#include <math.h>

int main()
{
    double x1,y1,r1;
    double x2,y2,r2;

    scanf("%lf %lf %lf",&x1,&y1,&r1);
    scanf("%lf %lf %lf",&x2,&y2,&r2);

    double d = sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1)); //d adalah jarak antara kedua titik pusat

    double jumlahr = r1 + r2; //jumlah kedua jari jari, digunakan untuk menentukan hubungan kedua lingkaran
    double selisihr = fabs(r1 - r2); // untuk lingkaran di dalam lingkaran

    double eps = 1e-9; // karena pakai double

    // Tidak berpotongan
    if (d > jumlahr + eps || d < selisihr - eps)
    {
        printf("Amang ges\n");
    }

    // Bersinggungan
    else if (fabs(d-jumlahr) < eps ||
             fabs(d-selisihr) < eps)
    {
        printf("Fyuh, hampir saja\n");

        double a = (r1*r1 - r2*r2 + d*d) / (2*d);// a adalah jarak dari pusat lingkaran pertama menuju garis yg melewati kedua titik ptong

        double xm = x1+a * (x2-x1)/d;// m adalah titik tengah antara 2 titik potong, yang merupakan titik singgung
        double ym = y1+a * (y2-y1)/d;

        printf("%.2f %.2f\n",xm, ym);
    }

    // Berpotongan
    else
    {
        printf("Tidaaaaaak, airnya muncrat!\n");

        double a = (r1 * r1 - r2 * r2 + d * d) / (2 * d);

        double h = sqrt(r1*r1 - a*a);//h adalah jarak dari titik tengah kedua titik potong menuju salah satu titik potong

        double xm = x1 + a * (x2-x1) / d;
        double ym = y1 + a * (y2-y1) / d;

        double xa = xm - h * (y2-y1) / d;// titik potong pertama
        double ya = ym + h * (x2-x1) / d;

        double xb = xm + h * (y2-y1) / d;// titik potong kedua
        double yb = ym - h * (x2-x1) / d;

        double hasil = xa + ya + xb + yb;

        printf("%.2f\n", hasil);
    }

    return 0;
}
