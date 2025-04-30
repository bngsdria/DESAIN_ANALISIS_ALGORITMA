#include <iostream>
using namespace std;

int main()
{
    // Deklarasi variabel
    int Nilai[20];
    int Posisi[20];
    int i, n, Bil, jmlh = 0;
    bool ketemu;

    cout << "Masukkan jumlah deret bilangan = ";
    cin >> n;
    cout << endl;

    // Membaca elemen array
    for(i = 0; i < n; i++)
    {
        cout << "Nilai bilangan ke-" << i << " = ";
        cin >> Nilai[i];
    }

    // Mencetak elemen array
    cout << "\nDeret Bilangan = ";
    for(i = 0; i < n; i++)
        cout << Nilai[i] << " ";

    cout << "\n\nMasukkan Bilangan yang akan Dicari = ";
    cin >> Bil;

    // Melakukan Pencarian
    for(i = 0; i < n; i++)
    {
        if(Nilai[i] == Bil)
        {
            ketemu = true;
            Posisi[jmlh] = i;
            jmlh++;
        }
    }

    if(ketemu)
    {
        cout << "Bilangan " << Bil << " ditemukan sebanyak " << jmlh;
        cout << "\npada posisi ke = ";
        for(i = 0; i < jmlh; i++)
            cout << Posisi[i] << " ";
    }
    else
        cout << "Maaf, bilangan " << Bil << " tidak ditemukan";

    getchar();
}
