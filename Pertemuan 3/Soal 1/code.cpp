#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c;
    double x, x1, x2, D, z, r;
    cout <<"=========================================\n";
    cout <<"            Persamaan Kuadrat\n";
    cout <<"=========================================\n";
    cout <<"Bentuk Persamaan Kuadrat : ax²+bx+c=0\n" <<endl;
    cout <<"Masukkan Nilai a: ";
    cin >>a;
    cout <<"Masukkan Nilai b: ";
    cin >>b;
    cout <<"Masukkan Nilai c: ";
    cin >>c;
    cout <<endl;
    cout <<"=========================================\n";
    cout <<endl;
    D=b*b-4*a*c;
    cout << "D = "<<D;

    if (a==0) {
        cout << "\n" << "Bukan Persamaan Kuadrat" <<endl;
    } else {
        if (D>0){
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            cout << "\n" <<"Mempunyai dua akar yang berbeda"<<endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        } 
        else if (D==0) {
            x = -b / (2 * a);
            cout <<"\n" << "Mempunyai satu akar"<<endl;
            cout << "x = " << x << endl;
        } 
        else if (D<0) {
            z = -b / (2 * a);
            r = sqrt(-D) / (2 * a);
            cout <<"\n" << "Mempunyai akar imaginer"<<endl;
            cout << "x1 = " << z << " + " << r << endl;
            cout << "x2 = " << z << " - " << r << endl;
        }

    } 
    
    return 0;
}

