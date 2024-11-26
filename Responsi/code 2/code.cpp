#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n1;
    int n2;
    cout << "Masukkan jumlah elemen pertama: ";
    cin >> n1;

    int daftar1[n1];
    cout << "Masukkan elemen pertama (terurut): ";
    for (int i = 0; i < n1; i++) {
        cin >> daftar1[i];
    }
    cout << "Masukkan jumlah elemen kedua: ";
    cin >> n2;

    int daftar2[n2];
    cout << "Masukkan elemen kedua (terurut): ";
    for (int i = 0; i < n2; i++) {
        cin >> daftar2[i];
    }
    int gabungan[n1 + n2];
    
    for (int i = 0; i < n1; i++) {
        gabungan[i] = daftar1[i];
    }    
    for (int i = 0; i < n2; i++) {
        gabungan[n1 + i] = daftar2[i];
    }
    sort(gabungan, gabungan + n1 + n2);

    cout << "Daftar gabungan terurut: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << gabungan[i] << " ";
    }
    cout << endl;

    return 0;
}

