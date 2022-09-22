#include <stdio.h>

int main()
{
	int panjang_lahan, lebar_lahan, luas_lahan,panjang_rumah, lebar_rumah, luas_rumah, lama_memotong_rumput, luas_lahan_perdetik;
	luas_lahan_perdetik = 2;
	/*mendapatkan data panjang dan lebar lahan menyeluruh*/
	printf("Berapa panjang dan lebar lahan? Masukan dengan format panjang (spasi) lebar lahan (dalam kaki) => \n");
	scanf ("%d%d", &panjang_lahan, &lebar_lahan);

	/*mendapatakan data panjang dan lebar rumah*/
	printf("Berapa panjang dan lebar rumah? Masukan dengan format panjang (spasi) lebar rumah (dalam kaki) => \n");
	scanf ("%d%d", &panjang_rumah, &lebar_rumah);
	
	/*menghitung luas rumah*/
	luas_rumah = panjang_rumah * lebar_rumah;
	/*menghitung luas lahan yang ditumbuhi rumput saja*/
	luas_lahan = (panjang_lahan * lebar_lahan) - luas_rumah;
	/*menghitung lama pemotongan rumput dilahan yang ditumbuhi rumput*/
	lama_memotong_rumput = luas_lahan / luas_lahan_perdetik;
	/*menampilkan hasil kalkulasi kepada pengguna*/
	printf("lama waktu untuk memotong lahan yang ditumbuhi rumput seluas %d kaki kuadrat adalah %d detik \n", luas_lahan, lama_memotong_rumput);
	return 0;	
}
