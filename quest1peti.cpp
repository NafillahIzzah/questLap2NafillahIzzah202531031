#include <iostream>
using namespace std;
int main (){
	cout << "Nafillah Izzah Syahfitri Wardani 202531031" << endl;
	
	string petiHadiah;
	int skor;
	cout << "Masukkan Skor: ";
	cin >> skor;
	
	if (skor < 50){
		petiHadiah = "Peti Perunggu";
	} else if (skor >= 50 && skor <= 99){
		petiHadiah = "Peti Perak";
	} else if (skor >= 100 && skor <= 199){
		petiHadiah = "Peti Emas";
	} else {
		petiHadiah = "Peti Mitos";
	}
	
	cout << "Total skor Anda: "<< skor <<endl;
	cout << "Peti yang didapatkan adalah " << petiHadiah;
	
	cin.get();
	return 0;
}
