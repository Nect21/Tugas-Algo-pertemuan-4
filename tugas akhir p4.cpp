#include <iostream>

using namespace std;
int main () {
	float pembelian;
	
	cout << " Masukan Jumlah Pembelian : ";
	cin >> pembelian;

	switch((int)pembelian){
			
			case 100000 ... 199999: 
			cout << " Anda akan mendapatkan Discout 5% " << endl;
			break;
			
			case 200000 ... 299999:
			cout << " Anda akan mendapatkan tiket ke Yogya " << endl;
			break;
			
			case 300000 ... 399999:
			cout << " Anda akan mendapatkan tiket ke Bali " << endl;
			break;
			
			case 400000 ... 499999:
			cout << " Anda akan mendapatkan Jam Tangan Rolex " << endl;
			break;
			
			case 500000 ... INT_MAX:
			cout << " Anda akan mendapatkan tiket ke Swiss " << endl;
			break;
			
			default:
			cout << " Anda tidak mendapatkan Bonus " << endl;
			break;
			 
		}

return 0;

}
