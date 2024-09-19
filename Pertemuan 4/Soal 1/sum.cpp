#include <iostream>
using namespace std;

int sum(int n) {
    int jumlah = 0;
    for (int i = 1; i <= n; ++i) {
        jumlah += i;
    }
    return jumlah;
}

int main() {
    int n;

    cout << "n: ";
    cin >> n;

    cout << "Jumlah 1 sampai " << n << " : " << sum(n) << endl;

    return 0;
}
