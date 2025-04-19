#include <iostream>
using namespace std;

int main() {
    string mantra;
    int jumlahVokal = 0;
    int i = 0;
    char huruf;

    cout << "Masukkan Mantra : ";
    getline(cin, mantra);

    // Loop menggunakan while
    while (i < mantra.length()) {
        huruf = tolower(mantra[i]);
        if (huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o') {
            jumlahVokal++;
        }
        i++;
    }

    if (jumlahVokal > 0) {
        cout << "Kekuatan mantra: " << jumlahVokal << " vokal" << endl;
    } else {
        cout << "Mantra tidak valid! Tidak mengandung vokal." << endl;
    }

    return 0;
}