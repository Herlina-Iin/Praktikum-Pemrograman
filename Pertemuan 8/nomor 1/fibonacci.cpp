#include <iostream>
using namespace std;

int fibonacci (int n) {
    if (n<=1) return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cout<<"Masukkan n : ";
    cin>>n;

    int hasil=fibonacci(n);
    cout<<"Bilangan fibonaccci ke-"<<n<<" adalah : "<<hasil<<endl;

    return 0;
}
