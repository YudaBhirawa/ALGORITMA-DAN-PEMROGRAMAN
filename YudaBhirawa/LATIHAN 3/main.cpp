#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int A, B;
    char pilihan;

    // Menerima input bilangan A dan B
    cout << "Masukkan bilangan A: ";
    cin >> A;
    cout << "Masukkan bilangan B: ";
    cin >> B;

    // Menerima input pilihan menu
    cout << "Pilih operasi:\n";
    cout << "a: A + B\n";
    cout << "b: A - B\n";
    cout << "c: A * B\n";
    cout << "d: A / B (hasil real)\n";
    cout << "e: A div B (hasil integer)\n";
    cout << "f: A mod B\n";
    cout << "Masukkan pilihan (a/b/c/d/e/f): ";
    cin >> pilihan;

    // Memilih operasi berdasarkan input pilihan
    switch (pilihan) {
        case 'a':
            cout << "Hasil A + B = " << A + B << endl;
        break;
        case 'b':
            cout << "Hasil A - B = " << A - B << endl;
        break;
        case 'c':
            cout << "Hasil A * B = " << A * B << endl;
        break;
        case 'd':
            if (B != 0) {
                cout << "Hasil A / B = " << static_cast<float>(A) / B << endl;
            } else {
                cout << "Pembagian dengan 0 tidak diperbolehkan!" << endl;
            }
        break;
        case 'e':
            if (B != 0) {
                cout << "Hasil A div B = " << A / B << endl;
            } else {
                cout << "Pembagian dengan 0 tidak diperbolehkan!" << endl;
            }
        break;
        case 'f':
            if (B != 0) {
                cout << "Hasil A mod B = " << A % B << endl;
            } else {
                cout << "Pembagian dengan 0 tidak diperbolehkan!" << endl;
            }
        break;
        default:
            cout << "Bukan pilihan menu yang benar" << endl;
        break;
    }

    return 0;
}
