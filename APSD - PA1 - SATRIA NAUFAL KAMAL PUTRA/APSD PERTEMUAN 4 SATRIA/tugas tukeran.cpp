#include <iostream>
#include <iomanip>
using namespace std;

struct Mahasiswa {
    string nama;
    string npm;
};

int main() {
    int jumlahData;
    cout << "Jumlah Data Yang Akan di Input: ";
    cin >> jumlahData;
    cin.ignore(); // untuk mengabaikan newline setelah cin

    Mahasiswa mhs[jumlahData];

    // Input data mahasiswa
    for (int i = 0; i < jumlahData; i++) {
        cout << "\nMasukkan Nama dan Npm Mahasiswa:\n";
        cout << "Nama : ";
        getline(cin, mhs[i].nama);
        cout << "NPM  : ";
        getline(cin, mhs[i].npm);
    }

    // Tampilkan data dalam tabel
    cout << endl;
    cout << "===============================================" << endl;
    cout << "||      NPM      ||          Nama            ||" << endl;
    cout << "===============================================" << endl;

    for (int i = 0; i < jumlahData; i++) {
        cout << "|| " << setw(13) << mhs[i].npm
             << " || " << setw(24) << left << mhs[i].nama << "||" << endl;
    }

    cout << "===============================================" << endl;

    return 0;
}
