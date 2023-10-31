#include<iostream>
using namespace std;

int main(){
	int luas, keliling, alas, tinggi, sisi, panjang, lebar, jarijari;
	char pilih, s, p, l;
	
    system ("color 70");
	cout << "Pilih salah satu menu dibawah ini " << endl;
	cout << "=================================== " << endl;
	cout << "Segitiga" << endl;
	cout << "Persegi panjang " << endl;
	cout << "Lingkaran " << endl;
	cout << "=================================== " << endl;
	cout << "Pilih misal(p, l, s) : ";
	cin >> pilih;
	
	switch(pilih){
	
		case('s'):	
			cout << "Masukkan alas : ";cin >> alas;
			cout << "Masukkan tinggi : ";cin >> tinggi;
			cout << "Masukkan sisi : ";cin >> sisi;
			luas = 0.5 * alas * tinggi;
			keliling = sisi + sisi + sisi;
			cout << "Maka luas segitiga adalah : " << luas << endl;
			cout << "Maka keliling segitiga adalah : " << keliling << endl;
			break;	
		
		case('p'):
			cout << "Masukkan panjang: "; cin >> panjang;
			cout << "Masukkan lebar : ";cin >> lebar;
			luas = panjang * lebar;
			cout << "Maka luas Persegi panjang adalah: " << luas << endl;
			keliling = 2 * (panjang + lebar);
			cout << "Maka keliling persegi panjang adalah: " << keliling << endl;
			break;
			
		case('l'):
			cout << "Masukkan jari-jari: "; cin >> jarijari;
			luas = 3.14 * jarijari * jarijari;
			cout << "Maka luas Lingkaran adalah: " << luas << endl;
			keliling = 2 * 3.14 * jarijari;
			cout << "Maka keliling lingkaran adalah: " << keliling << endl;
			break;
}
	
	return 0;
}
