#include <iostream>
using namespace std;

void selectionSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i; // Menyimpan indeks elemen terbesar
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIdx]) { // Mencari elemen terbesar
                maxIdx = j;
            }
        }
        // Menukar elemen terbesar ke posisi yang sesuai
        swap(arr[i], arr[maxIdx]);

        // Menampilkan hasil setelah setiap iterasi
        cout << "Iterasi ke-" << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;

    // Memasukkan jumlah elemen
    cout << "Masukkan jumlah elemen: ";
    cin >> n;
    
    int arr[n];

    // Memasukkan nilai elemen
    cout << "Masukkan nilai elemen: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Menampilkan data sebelum sorting
    cout << "Data sebelum sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Memanggil fungsi selection sort untuk mengurutkan secara descending
    selectionSortDescending(arr, n);

    // Menampilkan hasil akhir setelah sorting
    cout << "Data setelah sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
