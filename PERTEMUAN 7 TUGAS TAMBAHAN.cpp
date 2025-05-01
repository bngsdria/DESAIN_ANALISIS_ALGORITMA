#include <iostream>
#include <string>
using namespace std;

class Buku {
private:
    string judul;
    string penulis;
    int tahun_terbit;

public:
    // Constructor
    Buku() {
        judul = "";
        cout << "Objek Buku '[judul tidak diketahui]' telah dibuat." << endl;
    }

    // Destructor
    ~Buku() {
        cout << "Objek Buku '" << judul << "' telah dihapus." << endl;
    }

    // Method untuk input data buku
    void inputData() {
        cout << "Masukkan judul buku: ";
        getline(cin, judul);
        cout << "Masukkan nama penulis: ";
        getline(cin, penulis);
        cout << "Masukkan tahun terbit: ";
        cin >> tahun_terbit;
        cin.ignore(); // Menghindari masalah getline selanjutnya
        cout << "Objek Buku '" << judul << "' telah dibuat." << endl;
    }

    // Method untuk menampilkan data buku
    void tampilData() {
        cout << "Judul: " << judul << endl;
        cout << "Penulis: " << penulis << endl;
        cout << "Tahun Terbit: " << tahun_terbit << endl;
    }
};

int main() {
    int jumlah;
    cout << "Masukkan jumlah buku (maksimal 5): ";
    cin >> jumlah;
    cin.ignore(); // Untuk membersihkan newline setelah input angka

    if (jumlah < 1 || jumlah > 5) {
        cout << "Jumlah tidak valid. Harus antara 1 sampai 5." << endl;
        return 1;
    }

    Buku daftarBuku[5];

    // Input data
    for (int i = 0; i < jumlah; i++) {
        cout << "\nInput data buku ke-" << i + 1 << ":" << endl;
        daftarBuku[i].inputData();
    }

    // Tampilkan data
    cout << "\nDaftar Buku:" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << "\nData buku ke-" << i + 1 << ":" << endl;
        daftarBuku[i].tampilData();
    }

    return 0;
}
