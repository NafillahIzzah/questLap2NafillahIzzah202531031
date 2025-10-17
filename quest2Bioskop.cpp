#include <iostream>
using namespace std;
int main (){
	cout << "Nafillah Izzah Syahfitri Wardani 202531031\n";
	int umur;
	string kategori;
	
	cout << "Masukkan umur Anda: ";
	cin >> umur;
	
	if (umur < 13){
		kategori = "SU";
	} else if (umur >= 13 && umur <= 16){
		kategori = "R13";
	} else if (umur >= 17 && umur <= 20){
		kategori = "D17";
	} else {
		kategori = "D21";
	}
	
	cout << "Umur Anda adalah " << umur << " tahun,";
	cout << " kategori maksimal film yang boleh Anda tonton memiliki kategori "<< kategori << ".";
	
	cin.get();
	return 0;
}
