#include <iostream>
using namespace std;

int main()
{
	std::string NamaSiswa;
	float nilai_1, nilai_2, nilai_3, nilaiAverage;
	
	cout << "Nama Siswa: ";
	getline(cin, NamaSiswa);
	
	cout << "Nilai Pertandingan I: ";
	cin >> nilai_1;
	cout << "Nilai Pertandingan II: ";
	cin >> nilai_2;
	cout << "Nilai Pertandingan III: ";
	cin >> nilai_3;
	
	nilaiAverage = (nilai_1 + nilai_2 + nilai_3) / 3;
	
	cout << "Siswa yang bernama " << NamaSiswa << endl;
	cout << "Memperoleh nilai rata - rata " << nilaiAverage << " dari hasil perlombaan yang diikutinya" << endl;
	
	int nilaiAverageInt = nilaiAverage;
	
	switch (nilaiAverageInt)
	{
		case 85 ... 100:
			cout << "Selamat anda mendapatkan hadiah Komputer Core i5";
			break;
		case 70 ... 84:
			cout << "Selamat anda mendapatkan hadiah Uang sebesar Rp. 2,500,000";
			break;
		default:
			cout << "Selamat anda mendapatkan hadiah Hiburan";
			break;
	}
	return 0;
}
