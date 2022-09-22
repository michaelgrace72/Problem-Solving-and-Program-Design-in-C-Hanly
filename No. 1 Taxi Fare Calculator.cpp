#include <stdio.h>

int main()
{
	
	double odometer_awal, odometer_akhir, jarak_tempuh, harga;

	printf ("KALKULATOR TARIF TAKSI \n");
	/* mendapatkan data odometer awal*/
	printf ("Masukan odometer pada awal perjalanan ");
	scanf  ("%lf", &odometer_awal);
	/* mendapatkan data odometer awal*/
	printf ("Masukan odometer pada akhir perjalanan ");
	scanf  ("%lf", &odometer_akhir);
	/* membuat kalkulasi jarak tempuh dan tarif*/
	jarak_tempuh = odometer_akhir - odometer_awal;
	harga 		 = jarak_tempuh * 1.50;
	/*menampilkan tarif sesuai dengan penghitungan*/
	printf ("Anda melakukan perjalanan sejauh %.2lf mil. \nDengan tarif $1.50 per mil, tarif taksi anda adalah $%.2lf.\n", jarak_tempuh, harga);
}
