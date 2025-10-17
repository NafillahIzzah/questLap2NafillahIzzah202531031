#include <iostream>
using namespace std;
int main (){
	cout << "Nafillah Izzah Syahfitri Wardani 202531031";
	int hari, denda;
	
	cout << "Masukkan hari terlambat: ";
	cin >> hari;
	
	if (hari == 0){
		denda = 0;
	} else if (hari >= 1 && hari <= 3){
		denda = hari * 2000;
	} else if (hari >= 4 && hari <= 7){
		denda = hari * 5000;
	} else {
		denda = hari * 10000;
	}
	cout << "Anda terlambat " << hari << " hari. \n";
	cout << "Denda yang harus ada bayar adalah Rp."<< denda <<"."; 
	
	
	cin.get();
	return 0;
}
