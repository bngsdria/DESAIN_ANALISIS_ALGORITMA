#include <iostream>
using namespace std;

int main() {
    // Mendeklarasikan array dengan 5 elemen
    int arr[5];

    // Memasukkan nilai ke dalam array
    cout << "Masukkan 5 angka: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Angka ke-" << i + 1 << ": ";
        cin >> arr[i];  // Mengisi elemen array
    }

    // Menampilkan semua elemen array
    cout << "\nAngka-angka yang Anda masukkan adalah: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Angka ke-" << i + 1 << ": " << arr[i] << endl;
    }

    return 0;
}
