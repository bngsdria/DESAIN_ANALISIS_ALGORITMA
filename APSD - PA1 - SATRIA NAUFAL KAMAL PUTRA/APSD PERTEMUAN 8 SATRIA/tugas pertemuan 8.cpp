#include <iostream>
#include <string>
using namespace std;

struct Node {
    string name;
    Node* next;
};

class TicketQueue {
private:
    Node* front;
    Node* rear;

public:
    TicketQueue() {
        front = rear = NULL;
    }

    void enqueue(string name) {
        Node* newNode = new Node();
        newNode->name = name;
        newNode->next = NULL;
        if (rear == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << name << " masuk dalam antrian.\n";
    }

    void dequeue() {
        if (front == NULL) {
            cout << "Antrian kosong.\n";
            return;
        }

        Node* temp = front;
        cout << temp->name << " dilayani dan keluar dari antrian.\n";
        front = front->next;

        if (front == NULL) {
            rear = NULL;
        }

        delete temp;
    }

    void display() {
        if (front == NULL) {
            cout << "Antrian kosong.\n";
            return;
        }

        cout << "Antrian saat ini:\n";
        Node* temp = front;
        while (temp != NULL) {
            cout << "- " << temp->name << endl;
            temp = temp->next;
        }
    }
};

int main() {
    TicketQueue queue;
    int pilihan;
    string nama;

    do {
        cout << "\n--- MENU LOKET TIKET ---\n";
        cout << "1. Tambah antrian\n";
        cout << "2. Layani pelanggan\n";
        cout << "3. Tampilkan antrian\n";
        cout << "0. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        cin.ignore(); // Untuk membersihkan buffer setelah cin

        switch (pilihan) {
        case 1:
            cout << "Masukkan nama: ";
            getline(cin, nama);
            queue.enqueue(nama);
            break;
        case 2:
            queue.dequeue();
            break;
        case 3:
            queue.display();
            break;
        case 0:
            cout << "Terima kasih!\n";
            break;
        default:
            cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 0);

    return 0;
}
