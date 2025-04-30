#include <iostream>
using namespace std;

int main()
 {
	cout << "Masukan sebuah angka : ";
	int angka;
	cin >> angka;
	
	if (angka % 2==0 ){
		 cout << angka << " adalah bilangan genap.\n";		
	} else {
		 cout << angka << " adalah bilangan ganjil.\n";		
	}
	
	return 0;
}
