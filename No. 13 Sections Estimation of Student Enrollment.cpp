#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int jumlah_murid_yang_terdaftar, klotter, murid_per_klotter;
	float sisa;
	
	murid_per_klotter = 30;
	
	/*mendapatkan data berupa jumlah murid yang terdaftar*/
	printf("Masukan jumlah murid yang terdaftar => \n");
	scanf ("%d", &jumlah_murid_yang_terdaftar);
	
	/*menghitung banyak klotter yang diperluakn*/
	klotter = jumlah_murid_yang_terdaftar / 30;
	/*menghitung sisa murid yang jumlahnya tidak genap 30*/
	sisa = jumlah_murid_yang_terdaftar % murid_per_klotter;
	/*menampilkan hasil kalkulasi kepada pengguna*/
	printf("jumlah klotter yang diperlukan adalah %d klotter jika siswa yang mendaftar sebanyak %d siswa. \nDengan %.0lf siswa yang tersisa. \n", klotter, jumlah_murid_yang_terdaftar, sisa);
	
}
