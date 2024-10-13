#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    vector<string>hasil;
    
    for(int i=1;i<=100;i++){
        if(i%3==0&&i%5==0){
            hasil.push_back("FizzBuzz");
        } else if(i%3==0){
            hasil.push_back("Fizz");
        } else if(i%5==0){
            hasil.push_back("Buzz");
        } else{
            hasil.push_back(to_string(i));
        }
    }
    for(const string& str:hasil){
        cout<<str<<endl;
    }
        
    return 0;
}
