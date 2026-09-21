#include <stdio.h>
int main() 
{
    int a, b,R,m,c;
    int kiri,kanan;

    scanf("%d %d %d", &a, &b, &R);
    scanf("%d %d", &m, &c);
	
	//rumus linkaran di soal (x-a)^2=(y-b)^2 = R, jari jari kuadrat di simbolkan oleh soal dengan R
	//persamaan garis = y=mx+c, ubah ke bentuk persamaan umum garis, jadinya mx-y+c=0, A= m , B = -1 , C = c
	// untuk menentukan hubungan lingkaran dengan garis, bisa gunakan rumus jarak dari titik ke garis
	//gunakan titik pusat dan garis yang diketahui, lalu bandingkan dengan jari jari, untuk menentukan apakah garis di dalam lingkaran atau diluar
    
    //rumus jarak dari titik ke garis > d=|Aa+Bb+c| / sqrt(A^2+B^2)
    // substitusi A,B,C ke dalam, d = |ma-b+c| / sqrt(m^2+1) < rumus jarak dari titik pusat ke garis laser
    // setelah mendapat rumus jarak titik pusat ke garis, bandingkan jarak tsb dengan jari jari lingkaran
    // d ? sqrt(R) < di persamaan, r^2 dilambangkan oleh R, jadi perlu di akar untuk mencari r saja
    // substitusi nilai d, |ma-b+c| / sqrt(m^2+1) ? sqrt(R)
    // karena kedua sisi ada akar, bisa di kuadratkan kedua sisi
    // (ma-b+c)^2/m^2+1 ? R
    // untuk meminimalkan kesalahan karena di int, hasil koma dihilangkan, jadi buat tidak ada pembagian
    // (ma-b+c)^2 ? R(m^2+1)
    // untuk menghitung, bisa dipisah dulu, jadi pers kiri dan kanan, baru di bandingkan lagi menggunakan if else
    
	kiri = (m*a-b+c)*(m*a-b+c);
    kanan = R*(m*m+1);

    if (kiri<kanan)
        printf("We're cooked.");
    else if (kiri==kanan)
        printf("Kegores dikit ga ngaruh.");
    else
        printf("We're so back.");

    return 0;
}
