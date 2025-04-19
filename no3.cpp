#include <iostream>
using namespace std;

int main() {
    string nama, nim;
    int nilai1, nilai2, nilai3;
    float rata_rata;

    // Input data
    cout << "Nama Mahasiswa: ";
    getline(cin, nama);
    cout << "NIM: ";
    getline(cin, nim);

    cout << "Nilai Mata Kuliah:\n";
    cout << "Algoritma dan Pemrograman: ";
    cin >> nilai1;
    cout << "Probabilitas dan Statistika: ";
    cin >> nilai2;
    cout << "Sistem Operasi: ";
    cin >> nilai3;

    cout << endl;

    // Menampilkan hasil kelulusan tiap matkul
    cout << "Algoritma dan Pemrograman: " 
         << (nilai1 >= 60 ? "Lulus." : "Tidak Lulus. Silakan Ulangi di Tahun Depan!") << endl;
    
    cout << "Probabilitas dan Statistika: " 
         << (nilai2 >= 60 ? "Lulus." : "Tidak Lulus. Silakan Ulangi di Tahun Depan!") << endl;
    
    cout << "Sistem Operasi: " 
         << (nilai3 >= 60 ? "Lulus." : "Tidak Lulus. Silakan Ulangi di Tahun Depan!") << endl;

    // Hitung rata-rata
    rata_rata = (nilai1 + nilai2 + nilai3) / 3.0;

    cout << "Nilai Rata-rata Semester ini: " << rata_rata << endl;

    return 0;
}