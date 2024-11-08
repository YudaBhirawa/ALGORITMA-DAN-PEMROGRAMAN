#include <iostream>
using namespace std;

int main() {
    int tabel[10] = {0}; // Mendeklarasikan array dengan 10 elemen, diinisialisasi dengan 0

    // Memasukkan 10 bilangan ke dalam tabel
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nilai untuk tabel[" << i << "]: ";
        cin >> tabel[i];
    }

    // Menampilkan isi array
    cout << "Isi array tabel: ";
    for (int i = 0; i < 10; i++) {
        cout << tabel[i] << " ";
    }

    return 0;
}


