#include <stdio.h>
#include <math.h>

int main()
{
	float jam, menit, lama_error, temperatur;
	/* mendapatkan data lama freezer telah error dalam jam dan menit*/
	printf("berapa lama freezer telah error? masukan waktu dalam jam (spasi) menit \n");
	scanf ("%f%f", &jam, &menit);
	
	/* mengubah data tersebut kedalam jam*/
	lama_error = jam + (menit/60);
	
	/* mengkalkulasi perkiraan suhu freezer setelah rusak selama x jam*/
	temperatur = (4*(lama_error*lama_error)/(lama_error + 2))-20;
	
	/* menampilkan perkiraan kalkulasi*/
	printf("temperatur dalam freezer setelah error kira-kira bersuhu %.2lf Celcius \n", temperatur);
}
