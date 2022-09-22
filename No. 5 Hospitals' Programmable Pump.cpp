#include <stdio.h>

int main()
{
	double vtbi, lama_infus, kecepatan_infus, jam;
	
	/* mendapatkan data vtbi*/
	printf("Masukan volume infus (ml) => ");
	scanf ("%lf", &vtbi);
	
	/*mendapatkan data lama infus*/
	printf("masukan waktu setiap satu kali infus (dalam menit) => ");
	scanf ("%lf", &lama_infus);
	
	/*mengubah waktu dari menit kedalam jam*/
	jam = lama_infus / 60;
	
	/*menghitung kecepatan infus*/
	kecepatan_infus = (vtbi) / jam;
	
	/*menampilkan vtbi dan kecepatan infus*/
	printf ("\nvtbi: %.4lf ml\n", vtbi);
	printf ("kecepatan infus: %.4lf ml/jam", kecepatan_infus);
}
