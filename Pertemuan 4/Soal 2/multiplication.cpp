#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan angka: ";
    cin >> n;

    cout << "Tabel Perkalian untuk " << n << ":\n";

    for(int i = 1; i <= 10; ++i) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}
