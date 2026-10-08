#include <stdio.h>
void calc_h(double k,double a,double t2,double t1,double x,double *h)
{
    *h = k*a*(t2-t1)/x;
}
void calc_k(double h,double a,double t2,double t1,double x,double *k)
{
    *k = h*x/(a*(t2-t1));
}
void calc_a(double h,double k,double t2,double t1,double x,double *a)
{
    *a = h*x/(k*(t2-t1));
}
void calc_t2(double h,double k,double a,double t1,double x,double *t2)
{
    *t2 = (h*x)/(k*a)+t1;
}
void calc_t1(double h,double k,double a,double t2,double x,double *t1)
{
    *t1 = t2-(h*x)/(k*a);
}
void calc_x(double h,double k,double a,double t2,double t1,double *x)
{
    *x = k*a*(t2-t1)/h;
}


int baca_data(const char *teks,double *nilai)
{
    char c;
    int hasil;

    while (1)
	{
        printf("%s >> ",teks);
        hasil = scanf("%lf",nilai);

        if (hasil == 1)
		{
            return 0;
		}
        scanf(" %c",&c);
        scanf("%*[^\n]");
        if (c == '?') 
		{
            return 1;
        }
        printf("Input tidak valid, isi angka atau '?'.\n");
    }
}

void tampilkan_rumus(void)
{
    printf("\n");
    printf("      kA (T2 - T1)\n");
    printf("H = -----------------\n");
    printf("           X\n\n");
}

int main()
{
    double h=0,k=0,a=0,t2=0,t1=0,x=0;
    int tanya[6];
    int jumlah_tanya=0;
    int i;
    int error=0;

    printf("Isi sesuai data yang diketahui. Untuk yang tidak diketahui, isi tanda tanya (?).\n");
    tanya[0] = baca_data("Rate of heat transfer (watts)",&h);
    tanya[1] = baca_data("Coefficient of thermal conductivity (W/m-K)",&k);
    tanya[2] = baca_data("Cross-sectional area of conductor (m^2)",&a);
    tanya[3] = baca_data("Temperature on one side (K)",&t2);
    tanya[4] = baca_data("Temperature on other side (K)",&t1);
    tanya[5] = baca_data("Thickness of conductor (m)",&x);

    for (i=0;i<6;i++) 
	{
        jumlah_tanya += tanya[i];
    }
    if (jumlah_tanya != 1) 
	{
        printf("\nHarus ada tepat satu tanda tanya.");
        return 1;
    }
    if (tanya[0]) 
	{
        if (x == 0) error = 1;
    } 
	else if (tanya[1]) 
	{
        if (a == 0 || t2 == t1) error = 1;
    } 
	else if (tanya[2]) 
	{
        if (k == 0 || t2 == t1) error = 1;
    } 
	else if (tanya[3] || tanya[4]) 
	{
        if (k == 0 || a == 0) error = 1;
    } 
	else if (tanya[5]) 
	{
        if (h == 0) error = 1;
    }
    if (error) {
        printf("\nData tidak bisa dihitung (ada pembagian dengan nol).\n");
        return 1;
    }

    tampilkan_rumus();

    if (tanya[0])
	{
        calc_h(k,a,t2,t1,x,&h);
        printf("Rate of heat transfer is %.2f W.\n",h);
    } 
	else if (tanya[1]) 
	{
        calc_k(h,a,t2,t1,x,&k);
        printf("Coefficient of thermal conductivity is %.3f W/m-K.\n",k);
    } 
	else if (tanya[2]) 
	{
        calc_a(h,k,t2,t1,x,&a);
        printf("Cross-sectional area is %.3f m^2.\n",a);
    } 
	else if (tanya[3]) 
	{
        calc_t2(h,k,a,t1,x,&t2);
        printf("Temperature on one side is %.1f K.\n",t2);
    } 
	else if (tanya[4]) 
	{
        calc_t1(h,k,a,t2,x,&t1);
        printf("Temperature on the other side is %.1f K.\n",t1);
    } 
	else 
	{
        calc_x(h,k,a,t2,t1,&x);
        printf("Thickness of conductor is %.4f m.\n",x);
    }

    printf("H  = %.1f W\t\tT2 = %.1f K\n",h,t2);
    printf("k  = %.3f W/m-K\t\tT1 = %.1f K\n",k,t1);
    printf("A  = %.3f m^2\t\tX  = %.4f m\n",a,x);

    return 0;
}
