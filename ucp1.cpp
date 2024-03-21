//1.   bublesort ketika ada beberapa data tidak berurutan, maka index 0 akan membandingkan dengan 1,
// kemudian jika elemen pada index 0 lebih besar dari pada index 1 maka kedua index itu akan bertukar elemen
// begitu juga seterusnya index 1 dibandingkan pada index 2 dan apabila index 2 sudah lebih besar maka tidak bertukar
// dan lanjut ke index seterusnya sampai selesai tapi ketika sudah membandingkan seluruh index dan masih belum
// urut semua maka perbandingan seperti itu akan diulang ulang dan 1 pengulangan itu di hitung 1 pass sampai 
// semua data terurut dari terkecil ke terbesar.

//2.   shellsort membandingkan dari index 0 melompat ke index 3 kemudian 6 (kelipatan 3), begitu juga
//  index 1 dibandingkan index 4 dan seterusnya yang kelipatan 3 dari 1. dan seterusnya hingga semua index
//  sudah memiliki lawan banding. dan ini sudah di hitung pass 1.
//  Apabila sudah di kelompokkan perbandingannnya dan semua data belum urut maka akan di di kelompokkan lagi namun 
//  index kelipatan 2. dan proses pengulangan ini di hitung pass 2.
//  apabila belum urut maka akan di bandingkan semua index dengan satu nomor index disebelahnya apabila elemen belum urut 
//  maka akan di swap dan apabila sudah maka no changes. di pass ke 3 ini semua elemen sudah urut.

//3.   shellsort karena shelsort lebih efeketif membandingkannya ketika sudah banyak data yang sudah urut.


#include <iostream>
using namespace std;

int sascha[43];
int n;

void input() {

	while (true) {
		cout << "Masukkan banyaknya elemen pada Array : ";
		cin >> n;
		if (n <= 43)
			break;
		else {
			cout << "\rArray dapat mempunyai maksimal 43 elemen.\n"; 
		}
	}
	cout << endl;                                    
	cout << "===============" << endl;                
	cout << "Masukkan Elemen Array " << endl;        
	cout << "===============" << endl;              

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> sascha[i];
	}
}
void selectionsort() {
	int i, temp, j;

	for (i = 1; i <= n - 1; i++) {         

		temp = sascha[i];                     

		j = i - 1;                         
		while (j >= 0 && sascha[j] > temp)    
		{
			sascha[j + 1] = sascha[j];           
			j--;                           
		}

		sascha[j + 1] = temp;                
	}
}
void display() {
cout << endl;
	cout << "==================================" << endl;
	cout << "Element Array Yang Telah Tersusun" << endl;
	cout << "==================================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << sascha[j];
		if (j < n < 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main()
{
	input();
	selectionsort();
	display();
		return 0;

}