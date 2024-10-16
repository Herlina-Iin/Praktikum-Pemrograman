#include<iostream>
#include<string>
using namespace std;

struct Barang{
    string kode;
    string nama;
    int harga;
    int jumlah;
};

int main(){
    const int MAX_BARANG=50;
    Barang barang[MAX_BARANG];
    int n;
    float totalBarang=0;
    float totalHarga=0;
    float rerataHarga=0;
    
    cout<<"Jumlah barang (max 50): ";
    cin>>n;
    cout<<endl;
    
    int total = 0;
    
    for(int i=0; i<n; i++){
        cout<<"Barang ke-"<<i+1<<endl;
        
        cout<<"Kode Barang: ";
        cin>>barang[i].kode;
        
        cout<<"Nama Barang: ";
        cin>>barang[i].nama;
        
        cout<<"Harga: ";
        cin>>barang[i].harga;
        
        cout<<"Jumlah: ";
        cin>>barang[i].jumlah;
        
        totalBarang+=barang[i].jumlah;
        int hargatotal = barang[i].jumlah * barang[i].harga;
        total = total + hargatotal;
        rerataHarga = total/totalBarang;
        
        cout<<endl;
    }
    
    cout<<"Total Barang: "<<totalBarang<<endl;
    cout<<"Rata-rata Harga: "<<rerataHarga<<endl;
    
    return 0;
}
