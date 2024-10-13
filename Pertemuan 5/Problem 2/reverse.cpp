#include<iostream>
#include<vector>
using namespace std;

vector<int>reverseArraykeVector(int arr[], int size){
    vector<int>reversed;

    for(int i=size-1;i>=0;i--){
        reversed.push_back(arr[i]);
    }
    return reversed;
}

int main(){
    int n;
    cout<<"Banyak angka : ";
    cin>>n;
    int arr[n];
    cout<<"Masukkan "<<n<<" angka : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>reversed=reverseArraykeVector(arr,n);
    cout<<"Vektor terbalik : ";
    for(const int& num:reversed){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}
