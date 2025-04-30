#include <iostream>
#include <string>

using namespace std;

class Buku {
	private:
    string judul;
	
	public:
    Buku(string x) {
        judul = x;
        cout << "Buku " << judul << " ditambahkan." << endl;
    }

    ~Buku() {
        cout << "Buku " << judul << " dihapus." << endl;
    }
};

int main() {
    string judulbuku;
    
    cout << "Masukkan judul buku: ";
   	getline(cin, judulbuku);

    Buku* myBook = new Buku(judulbuku);

    delete myBook;

    return 0;
}
