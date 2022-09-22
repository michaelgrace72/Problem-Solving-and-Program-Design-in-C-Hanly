#include <stdio.h>

int main()
{
	double BTU, galon, barrel, efisiensi;
	printf("Masukan efisiensi minyak rumah anda (dalam persen) => \n");
	scanf ("%lf", &efisiensi);
	printf ("Masukan jumlah galon minyak yang digunakan => \n");
	scanf ("%lf", &galon);
	barrel = galon / 42;
	BTU = 5800000 * barrel * efisiensi;
	printf("Maka jumlah BTU yang terdapat pada rumah tersebut sebesar %.4lf", BTU);
}
