#include <iostream>
using namespace std;

double rekursi(int arr[], int n){
    if (n==1) return arr[0];
    else
        return arr [n-1]+rekursi(arr, n-1);
}
double rerata(int arr[], int n){
    double jumlah=rekursi(arr,n);
    return jumlah/n;
}
int main(){
    int n;
    cout<<"Banyak data : ";
    cin>>n;
    
    int arr[n];
    cout<<"Masukkan "<<n<<" angka : "<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    double hasil=rerata(arr, n);
    cout<<"Rata-rata : "<<hasil<<endl;
    
    return 0;
}
