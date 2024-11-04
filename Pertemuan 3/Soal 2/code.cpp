#include <iostream>
using namespace std;

int main() {
    int bil1, bil2, bil3, terbesar;

    cout << "Masukkan bilangan 1: ";
    cin >> bil1;
    cout << "Masukkan bilangan 2: ";
    cin >> bil2;
    cout << "Masukkan bilangan 3: ";
    cin >> bil3;

    switch (bil1 > bil2) {
        case 1: 
            terbesar = bil1;
            break;
        case 0: 
            terbesar = bil2;
            break;
    }
    switch (terbesar > bil3) {
        case 1: 
            break;
        case 0: 
            terbesar = bil3;
            break;
    }

    cout << "Bilangan terbesar adalah: " << terbesar << endl;

    return 0;
}
