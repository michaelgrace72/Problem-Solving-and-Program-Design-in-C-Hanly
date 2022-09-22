#include <stdio.h>
#include <math.h>

int main()
{
	int m, n, sisi_1, sisi_2, hypotenuse;
	
	/*input nilai m dan n*/
	printf("Masukan integer => ");
	scanf ("%d", &m);
	
	printf("Masukan integer lain => ");
	scanf ("%d", &n);
	
	/*kalkulasi sisi-sisi segitiga siku-siku berdasarkan rumus yang telah disediakan
	  menggunakan abs untuk menyatakan mutlak*/
	sisi_1 = abs((m*m) - (n*n));
	sisi_2 = 2 * (m * n);
	hypotenuse = (m * m ) + (n * n);
	
	/*menampilkan hasil kalkulasi triple phytagoras kepada pengguna*/
	printf("triple pitagoras dari integer-integer tersebut adalah %d, %d, %d", sisi_1, sisi_2, hypotenuse);
	
}
