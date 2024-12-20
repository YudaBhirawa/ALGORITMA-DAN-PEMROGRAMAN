#include <iostream>
using namespace std;

// Prosedur untuk menampilkan menu jenis nilai
void tampilanMenu() {
    cout << "=========================" << endl;
    cout << "       Menu Nilai        " << endl;
    cout << "=========================" << endl;
    cout << "1. Tugas" << endl;
    cout << "2. UTS" << endl;
    cout << "3. UAS" << endl;
    cout << "=========================" << endl;
}

// Fungsi untuk menghitung nilai akhir berdasarkan bobot
float hitungNilaiAkhir(float nilaiTugas, float nilaiUTS, float nilaiUAS) {
    return (nilaiTugas * 0.3) + (nilaiUTS * 0.3) + (nilaiUAS * 0.4);
}

// PROGRAM UTAMA
int main() {
    float nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;

    // Menampilkan menu pilihan jenis nilai
    tampilanMenu();

    // Input nilai tugas, UTS, dan UAS
    cout << "Masukkan nilai tugas: ";
    cin >> nilaiTugas;
    cout << "Masukkan nilai UTS: ";
    cin >> nilaiUTS;
    cout << "Masukkan nilai UAS: ";
    cin >> nilaiUAS;

    // Menghitung nilai akhir
    nilaiAkhir = hitungNilaiAkhir(nilaiTugas, nilaiUTS, nilaiUAS);

    // Menampilkan nilai akhir
    cout << "Nilai Akhir Mahasiswa: " << nilaiAkhir << endl;

    return 0;
}
