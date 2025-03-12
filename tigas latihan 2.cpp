#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string temp;
    cout << "Masukkan jumlah buku: ";
    cin >> n;
    cin.ignore();

    string buku[n];

    cout << "Masukkan judul buku:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Buku ke-" << i + 1 << ": ";
        getline(cin, buku[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (buku[j] > buku[j + 1]) {
                temp = buku[j];
                buku[j] = buku[j + 1];
                buku[j + 1] = temp;
            }
        }
    }

    cout << "\nHasil Daftar buku setelah diurutkan :" << endl;
    for (int i = 0; i < n; i++) {
        cout << buku[i] << endl;
    }

    return 0;
}
