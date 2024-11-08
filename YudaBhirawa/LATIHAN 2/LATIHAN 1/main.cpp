#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int jamKerja, upah, jamLembur, jamKurang;

    // Upah per jam normal dan lembur
    const int UPAH_PER_JAM = 1000;
    const int UPAH_LEMBUR = 2000;
    const int JAM_KERJA_NORMAL = 40;
    const int DENDA_PER_JAM = 500;

    // Menerima input jumlah jam kerja per minggu
    cout << "Masukkan jumlah jam kerja per minggu: ";
    cin >> jamKerja;

    // Cek apakah jam kerja lebih dari, kurang dari, atau sama dengan 40 jam
    if (jamKerja > JAM_KERJA_NORMAL) {
        // Jika jam kerja lebih dari 40 jam, hitung jam lembur
        jamLembur = jamKerja - JAM_KERJA_NORMAL;
        upah = (JAM_KERJA_NORMAL * UPAH_PER_JAM) + (jamLembur * UPAH_LEMBUR);
        cout << "Jam lembur: " << jamLembur << " jam" << endl;
    } else if (jamKerja < JAM_KERJA_NORMAL) {
        // Jika jam kerja kurang dari 40 jam, hitung denda
        jamKurang = JAM_KERJA_NORMAL - jamKerja;
        upah = (jamKerja * UPAH_PER_JAM) - (jamKurang * DENDA_PER_JAM);
        cout << "Jam kurang: " << jamKurang << " jam" << endl;
    } else {
        // Jika jam kerja tepat 40 jam, tidak ada lembur atau denda
        upah = JAM_KERJA_NORMAL * UPAH_PER_JAM;
    }

    // Menampilkan total upah
    cout << "Total upah per minggu: Rp " << upah << endl;

    return 0;
}
